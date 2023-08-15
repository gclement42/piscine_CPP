/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:30:54 by gclement          #+#    #+#             */
/*   Updated: 2023/08/15 14:14:48 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cure::Cure(void): AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure & src): AMateria(src)
{
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
	this->_type = src._type;
	return (*this);
}

Cure *Cure::clone() const
{
	Cure *copy = new Cure(*this);
	return (copy);
}

