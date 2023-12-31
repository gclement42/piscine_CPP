/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:54:04 by gclement          #+#    #+#             */
/*   Updated: 2023/08/17 09:45:44 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = NULL;
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src._type;
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}