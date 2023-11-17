/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:15:14 by gclement          #+#    #+#             */
/*   Updated: 2023/09/27 13:37:56 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <limits.h>
#include <float.h>
#include <algorithm>

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
	double	num;
	char	c;

	num = std::atof(str.c_str());
	if (num != 0)
	{
		if (str == "nan" || str == "nanf" || str == "inf" 
			|| str == "inff" || str == "-inf" || str == "-inff")
			return (ScalarConverter::displayOther(num));
		else if ((std::count(str.begin(), str.end(), '.') > 1
			|| std::count(str.begin(), str.end(), 'f') > 1
			|| std::count(str.begin(), str.end(), '-') > 1) 
			|| str.find_first_not_of("-+.f0123456789") != std::string::npos) {
			return (ScalarConverter::ifImpossible());
		}
		ScalarConverter::convertToChar(num);
		ScalarConverter::convertToInt(num);
		ScalarConverter::convertToFloat(num);
		ScalarConverter::convertToDouble(num);
	}
	else
	{
		if (str.length() != 1)
			return (ScalarConverter::ifImpossible());
		c = static_cast<char>(str[0]);
		ScalarConverter::convertToChar(c);
		ScalarConverter::convertToInt(static_cast<double>(str[0]));
		ScalarConverter::convertToFloat(static_cast<double>(str[0]));
		ScalarConverter::convertToDouble(static_cast<double>(str[0]));
	}
}

void ScalarConverter::displayOther(const double num)
{
	float	resF = static_cast<float>(num);

	std::cout << "char: Non displayble" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: " << resF << "f" << std::endl;
	std::cout << "double: " << num << std::endl;
}

void ScalarConverter::convertToInt(const double num)
{
	int res;

	res = static_cast<int>(num);
	std::cout << "int: ";
	if (INT_MAX <= res || INT_MIN >= res)
		std::cout << "impossible" << std::endl;
	else
		std::cout << res << std::endl;
}

void ScalarConverter::convertToChar(const char c)
{
	std::cout << "char: ";
	if ((c >= '\0' && c < ' ') || c == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
}

void ScalarConverter::convertToChar(const double nb)
{
	char c;

	std::cout << "char: ";
	if (nb == static_cast<int>(nb) && nb >= 0 && nb <= 127)
	{
		c = static_cast<char>(nb);
		if ((c >= '\0' && c < ' ') || c == 127)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << c << "'" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void ScalarConverter::convertToFloat(const double nb)
{
	float res;

	res = static_cast<float>(nb);
	std::cout << "float: ";
	if ((res >= FLT_MAX || res <= -FLT_MAX))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (nb == static_cast<int>(nb))
		std::cout << res << ".0f" << std::endl;
	else
		std::cout << res << "f" << std::endl;
}


void ScalarConverter::convertToDouble(const double nb)
{
	double	res;

	res = static_cast<double>(nb);
	std::cout << "double: ";
	if (res >= DBL_MAX || res <= -DBL_MAX)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (nb == static_cast<int>(nb))
		std::cout << res << ".0" << std::endl;
	else
		std::cout << res << std::endl;
}

void ScalarConverter::ifImpossible(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}
