/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:15:14 by gclement          #+#    #+#             */
/*   Updated: 2023/09/20 11:34:43 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <limits.h>
#include <float.h>

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
	(void)src;
	return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	(void)src;
}

void ScalarConverter::convert(const std::string &str)
{
	ScalarConverter::convertToChar(str);
	ScalarConverter::convertToInt(str);
	ScalarConverter::convertToFloat(str);
	ScalarConverter::convertToDouble(str);
}

void ScalarConverter::convertToInt(const std::string &str)
{
	int result;

	std::cout << "int: ";
	result = std::atoi(str.c_str());
	if ((result == 0 && str[1]) 
		|| str.find_first_not_of("-+.f0123456789") != std::string::npos || INT_MAX < result || INT_MIN > result)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (result == 0 && str[0] != '0')
		result = static_cast<int>(str[0]);
	std::cout << result << std::endl;
}

void ScalarConverter::convertToChar(const std::string &str)
{
	char		c;
	double		num;

	num = std::atof(str.c_str());
	std::cout << "char: ";
	if (num == static_cast<int>(num) 
		&& (str.find_first_not_of("+.f0123456789") == std::string::npos))
	{
		c = static_cast<char>(num);
		if (c >= '\0' && c <= ' ' && c != 127)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << c << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void ScalarConverter::convertToFloat(const std::string &str)
{
	float res;

	res = std::atof(str.c_str());
	std::cout << "float: ";
	if (str.find_first_not_of("-+.f0123456789") != std::string::npos || FLT_MAX < res)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << res;
	if (res == static_cast<int>(res))
		std::cout << ".0";
	std::cout << "f"  << std::endl;
}

void ScalarConverter::convertToDouble(const std::string &str)
{
	double	res;
	char	*ptr;

	res = std::strtod(str.c_str(), &ptr);
	std::cout << "double: ";
	if (str.find_first_not_of("-+.f0123456789") != std::string::npos || DBL_MAX < res)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << res;
	if (res == static_cast<int>(res))
		std::cout << ".0";
	std::cout << std::endl;
}