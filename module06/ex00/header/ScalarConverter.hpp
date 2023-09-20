/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:15:16 by gclement          #+#    #+#             */
/*   Updated: 2023/09/20 11:09:27 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ScalarConverter
{
	private:
		static void convertToInt(const std::string &str);
		static void convertToChar(const std::string &str);
		static void convertToDouble(const std::string &str);
		static void convertToFloat(const std::string &str);
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &src);
		static void convert(const std::string &str);
};