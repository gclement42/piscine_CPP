/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:31:15 by gclement          #+#    #+#             */
/*   Updated: 2023/08/16 13:53:19 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
	return;
}

AMateria::AMateria(const AMateria &src)
{
	return;
	*this = src;
}

AMateria::~AMateria(void)
{
	return;
}

AMateria	&AMateria::operator=(const AMateria &src)
{
	this->_type = src._type;
	return (*this);
}

std::string	const	&AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "Unknown materia type" << std::endl;
}

