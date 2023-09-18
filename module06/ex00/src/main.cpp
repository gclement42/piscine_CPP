#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	char *arg = argv[1];
	ScalarConverter::convertToChar(arg);
	ScalarConverter::convertToInt(arg);
	ScalarConverter::convertToFloat(arg);
	ScalarConverter::convertToDouble(arg);
	return (0);
}