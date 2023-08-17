/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:18:30 by gclement          #+#    #+#             */
/*   Updated: 2023/08/17 09:32:40 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include "contact.hpp"
#include "phoneBook.h"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::display(void)
{
	std::cout << "-------- CONTACT --------" << std::endl;
	std::cout << "firstname : " << this->firstName << std::endl;
	std::cout << "lastname : " << this->lastName << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "phonenumber : " << this->phoneNumber << std::endl;
	std::cout << "darkest Secret : " << this->darkestSecret << std::endl;
	std::cout << "-------------------------" << std::endl;
}

void Contact::setContact(void)
{
	std::cout << "-------- CREATE NEW CONTACT --------\n";
	std::cout << "first name : ";
	std::cin >> this->firstName;
	std::cout << "last name : ";
	std::cin >> this->lastName;
	std::cout << "nickname : ";
	std::cin >> this->nickname;
	std::cout << "phonenumber : ";
	std::cin >> this->phoneNumber;
	std::cout << "darkestSecret : ";
	std::cin >> this->darkestSecret;
}

std::string Contact::GetPublicInfo(std::string str)
{
	if (str == "firstName")
		return (this->firstName);
	else if (str == "lastName")
		return (this->lastName);
	else
		return (this->nickname);
}