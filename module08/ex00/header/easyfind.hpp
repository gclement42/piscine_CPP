#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

template <typename T>
bool easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
	{
		std::cout << "Value not found" << std::endl;
		return (false);
	}
	std::cout << "Value found" << std::endl;
	return (true);
}

#endif