/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:30:43 by gclement          #+#    #+#             */
/*   Updated: 2023/08/16 13:53:04 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Ice::Ice(void): AMateria("ice")
{
	return;
}

Ice::Ice(const Ice & src): AMateria(src)
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice &Ice::operator=(const Ice &src)
{
	this->_type = src._type;
	return (*this);
}

Ice *Ice::clone() const
{
	return (new Ice());
}