/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:18:37 by gclement          #+#    #+#             */
/*   Updated: 2023/08/17 08:30:22 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include "phoneBook.h"

class Contact
{
	private :
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public :
		Contact(void);
		~Contact(void);
		void display(void);
		void setContact(void);
		std::string GetPublicInfo(std::string str);
};

#endif