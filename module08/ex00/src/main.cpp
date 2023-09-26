#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int>	Vector;

	for (int i = 0; i < 10; i++)
	{
		Vector.push_back(i);
	}
	easyfind(Vector, 2);
	easyfind(Vector, 5);
	easyfind(Vector, 11);
	return (0);
}