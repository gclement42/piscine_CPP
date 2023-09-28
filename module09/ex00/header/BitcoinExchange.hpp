/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:40:34 by gclement          #+#    #+#             */
/*   Updated: 2023/09/27 14:57:18 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map> 

class BitcoinExchange
{
	typedef typename std::multimap<std::string, float>::iterator multimapIterator;
	public :
		BitcoinExchange(std::string file);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &src);
		void displayExchangeRate(void);
		void createMap(std::multimap<std::string, float> &map, std::ifstream &file, const char *del);
		multimapIterator searchDate(std::string date);
		bool checkDateFormat(std::string date);
	private :
		std::multimap<std::string, float> _rate;
		std::multimap<std::string, float> _exchange;
};

#endif