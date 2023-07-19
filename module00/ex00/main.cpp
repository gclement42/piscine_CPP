#include <iostream>

int	main(int argc, char *argv[])
{
	int		i;
	char 	c;
	char	*argUpper;

	i = 1;
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
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
