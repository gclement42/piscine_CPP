#include <iostream>

int	main(int argc, char *argv[])
{
	int		i;
	char 	c;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		for (int x = 0; argv[i][x]; x++)
		{
			c = (char)std::toupper(argv[i][x]);
			std::cout << c;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
}
