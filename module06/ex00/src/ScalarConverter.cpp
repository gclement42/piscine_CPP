#include "ScalarConverter.hpp"
#include <cstdlib>

void ScalarConverter::convertToInt(const char *str)
{
	int result;

	std::cout << "int: ";
	result = std::atoi(str);
	if (result == 0 && str[1])
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (result == 0 && str[0] != '0')
		result = static_cast<int>(str[0]);
	std::cout << result << std::endl;
}

void ScalarConverter::convertToChar(char *str)
{
	char		c;
	double		num;

	num = std::atof(str);
	std::cout << "char: ";
	if (num == static_cast<int>(num))
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

void ScalarConverter::convertToFloat(char *str)
{
	float res;

	res = std::atof(str);
	std::cout << "float: " << res;
	if (res == static_cast<int>(res))
		std::cout << ".0";
	std::cout << "f"  << std::endl;
}

void ScalarConverter::convertToDouble(char *str)
{
	double	res;
	char	*ptr;

	res = std::strtod(str, &ptr);
	std::cout << "double: " << res;
	if (res == static_cast<int>(res))
		std::cout << ".0";
	std::cout << std::endl;
}