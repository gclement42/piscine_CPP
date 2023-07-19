/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:18:34 by gclement          #+#    #+#             */
/*   Updated: 2023/07/11 15:37:14 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
#include "phoneBook.h"

class PhoneBook
{
	public :
		PhoneBook(void);
		~PhoneBook(void);
		void add(void);
		void search(void);
	private :
		Contact contact[8];
		int		nbContact;
};

#endif