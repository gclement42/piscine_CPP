/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:18:25 by gclement          #+#    #+#             */
/*   Updated: 2023/07/19 12:28:35 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"
#include "phoneBook.hpp"
#include "contact.hpp"
#include <limits>

PhoneBook::PhoneBook(void)
{
	this->nbContact = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "destroy phoneBook\n";	
}

void PhoneBook::add(void)
{
	if (this->nbContact > 7)
		this->nbContact = 7;
	std::cout << "-------- CREATE NEW CONTACT --------\n";
	std::cout << "first name : ";
	std::cin >> this->contact[this->nbContact].firstName;
	std::cout << "last name : ";
	std::cin >> this->contact[this->nbContact].lastName;
	std::cout << "nickname : ";
	std::cin >> this->contact[this->nbContact].nickname;
	std::cout << "phonenumber : ";
	std::cin >> this->contact[this->nbContact].phoneNumber;
	std::cout << "darkestSecret : ";
	std::cin >> this->contact[this->nbContact].darkestSecret;
	this->nbContact++;
}

void PhoneBook::search(void)
{
	int	i;
	int answer;

	i = 0;
	while (i < this->nbContact)
	{
		std::cout << std::right << std::setw(10) << i + 1 << " | ";
		check_is_trunc(this->contact[i].firstName);
		check_is_trunc(this->contact[i].lastName);
		check_is_trunc(this->contact[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << "Choose contact displayed" << std::endl;
	std::cin >> answer;
	while (!std::cin)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Choose contact displayed" << std::endl;
		std::cin >> answer;
	}
	if (answer <= 8 && answer != 0 && answer < this->nbContact)
		this->contact[i - 1].display();
}
