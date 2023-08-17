/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:18:34 by gclement          #+#    #+#             */
/*   Updated: 2023/08/17 10:46:25 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "phoneBook.h"

class PhoneBook
{
	private :
		Contact contact[8];
		int		nbContact;
	public :
		PhoneBook(void);
		~PhoneBook(void);
		void add(void);
		void search(void);
};

#endif