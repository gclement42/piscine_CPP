#include "iter.hpp"
#include <iostream>

int main()
{
	char	arr[] = "abcde";
	int		arr2[] = {1, 2, 3, 4, 5};

	iter(arr, 5, test);
	iter(arr2, 5, test);
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr2[i];
	}
	std::cout << std::endl;
}