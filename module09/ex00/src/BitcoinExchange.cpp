/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:41:06 by gclement          #+#    #+#             */
/*   Updated: 2023/09/27 13:41:13 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
# include <iostream>
# include <utility>
# include <cstdlib>
# include <fstream>
# include <sstream>
# include <algorithm>

BitcoinExchange::BitcoinExchange(std::string file)
{
	std::ifstream	input(file.c_str(), std::ifstream::in);
	std::ifstream	data("data.csv", std::ifstream::in);

	if (!input.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return ;
	}
	if (!data.is_open())
	{
		std::cout << "Error: data not found" << std::endl;
		return ;
	}
	data.ignore(18, '\n');
	BitcoinExchange::createMap(_rate, data, ",");
	BitcoinExchange::createMap(_exchange, input, "|");
}


BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
	if (this != &src)
	{
		this->_rate = src._rate;
		this->_exchange = src._exchange;
	}
	return (*this);
}

void BitcoinExchange::createMap(std::multimap<std::string, float> &map, std::ifstream &file, const char *del)
{
	std::string line;
	std::pair<std::string, float> keyVal;
	size_t index;
	std::string key;

	while (std::getline(file, line))
	{
		index = line.find(del);
		if (index != std::string::npos)
		{
			
			key = line.substr(0, index);
			key.erase(std::remove_if(key.begin(), key.end(), ::isspace), key.end());
			keyVal = std::make_pair(
				key,
				std::atof(line.substr(index + 1).c_str())
			);
		}
		else
			keyVal = std::make_pair(line, 0);
		if (std::count (line.begin(), line.end(), *del) == 1 || line.empty())
			map.insert(keyVal);
		else
			std::cout << "\"" << line << "\" => Error: wrong data format" << std::endl;
	}
}

bool BitcoinExchange::checkDateFormat(std::string date)
{
	size_t	index;
	int		day;
	int		month;
	int		year;
	bool	result;

	result = true;
	if (date.size() != 10)
		result = false;
	index = date.find_first_of("-");
	if (index != 4)
		result = false;
	index = date.find_last_of("-");
	if (index != 7)
		result = false;
	day = std::atoi(date.substr(index + 1, 2).c_str());
	month = std::atoi(date.substr(5, 2).c_str());
	year = std::atoi(date.substr(0, 4).c_str());
	if (day < 1 || day > 31)
		result = false;
	if (month < 1 || month > 12)
		result = false;
	if (year < 2000 || year > 2022)
		result = false;
	if (!result)
	{
		std::cout << date << " => wrong date format" << std::endl;
		return (false);
	}
	return (true);
}

void BitcoinExchange::displayExchangeRate(void)
{
	std::multimap<std::string, float>::iterator	it;
	std::multimap<std::string, float>::iterator	rateIt;

	for (it = _exchange.begin(); it != _exchange.end(); it++)
	{
		rateIt = _rate.lower_bound((*it).first);
		if (!checkDateFormat((*it).first))
			continue ;
		else if ((*it).second < 0)
			std::cout << (*it).first << " => Error: Not a positive number" << std::endl;
		else if ((*it).second > 1000)
			std::cout << (*it).first << " => Error: too large number" << std::endl;
		else
		{
			std::cout << (*it).first << " => " << (*it).second << " = ";
			std::cout << ((*it).second * (*rateIt).second) << std::endl;
		}
	}
}