/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:18:28 by gclement          #+#    #+#             */
/*   Updated: 2023/08/17 09:28:05 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include "contact.hpp"
#include "phoneBook.h"
#include <iostream>
#include <limits>
#include <stdlib.h>

void check_is_trunc(std::string str)
{
	if (str.size() > 10)
		std::cout << std::right << std::setw(10) << str.substr(0, 9) + '.' << "|";
	else
		std::cout << std::right << std::setw(10) << str << "|";
}

int summary(PhoneBook *phoneBook)
{
	std::string	answer;

	while (1)
	{
		std::cout << "Please choose between \nADD\nSEARCH\nEXIT\n";
		std::cin  >> answer;
		if (std::cin.eof())
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    		std::cin.clear();
			exit(0);
		}
		if (answer == "ADD")
			phoneBook->add();
		else if (answer == "SEARCH")
			phoneBook->search();
		else if (answer == "EXIT")
			return (0);
	}
	return (1);
}

int	main()
{
	PhoneBook phoneBook;

	summary(&phoneBook);
	return (0);
}