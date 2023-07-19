/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:18:30 by gclement          #+#    #+#             */
/*   Updated: 2023/07/11 15:37:23 by gclement         ###   ########.fr       */
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
	std::cout << "contact " << this->firstName << " detruit";
}

void Contact::display(void)
{
	std::cout << "firstname : " << this->firstName << std::endl;
	std::cout << "lastname : " << this->lastName << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "phonenumber : " << this->phoneNumber << std::endl;
	std::cout << "darkest Secret : " << this->darkestSecret << std::endl;
}
