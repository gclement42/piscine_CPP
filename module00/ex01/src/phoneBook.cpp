/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:18:25 by gclement          #+#    #+#             */
/*   Updated: 2023/08/17 09:32:51 by gclement         ###   ########.fr       */
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
	return ;
}

void PhoneBook::add(void)
{
	if (this->nbContact > 7)
		this->nbContact = 7;
	this->contact[this->nbContact].setContact();
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
		check_is_trunc(this->contact[i].GetPublicInfo("firstName"));
		check_is_trunc(this->contact[i].GetPublicInfo("lastName"));
		check_is_trunc(this->contact[i].GetPublicInfo("nickName"));
		std::cout << std::endl;
		i++;
	}
	std::cout << "Choose contact displayed" << std::endl;
	std::cin >> answer;
	while (!std::cin)
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Wrong input\n" << std::endl;
		return ;
	}
	if (answer <= 8 && answer != 0 && answer <= this->nbContact)
		this->contact[answer - 1].display();
	else
		std::cout << "This contact doesn't exist\n" << std::endl;
}
