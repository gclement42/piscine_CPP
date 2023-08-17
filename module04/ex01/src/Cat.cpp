/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:42:58 by gclement          #+#    #+#             */
/*   Updated: 2023/08/17 09:45:19 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = NULL;
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}