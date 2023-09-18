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
	if (result == 0)
		result = static_cast<int>(str[0]);
	std::cout << result;
}

void ScalarConverter::convertToChar(char *str)
{
	int num;
	char res;

	num = std::atoi(str);
	std::cout << "char: ";
	if (num != 0)
	{
		res = static_cast<char>(num);
	}
	else
	{
		if (str[1])
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
		else
			res = str[0];
	}
	std::cout << res << std::endl;
}

void ScalarConverter::convertToFloat(char *str)
{
	float res;

	res = std::atof(str);
	std::cout << "float: " << res << std::endl;
}

void ScalarConverter::convertToDouble(char *str)
{
	double	res;
	char	*ptr;

	res = std::strtod(str, &ptr);
	std::cout << "double: " << res << std::endl;
}