/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:30:54 by gclement          #+#    #+#             */
/*   Updated: 2023/08/16 13:52:58 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cure::Cure(void): AMateria("cure")
{
	return;
}

Cure::Cure(const Cure & src): AMateria(src)
{
	return;
}

Cure::~Cure(void)
{
	return;
}

Cure &Cure::operator=(const Cure &src)
{
	this->_type = src._type;
	return (*this);
}

Cure *Cure::clone() const
{
	return (new Cure());
}

