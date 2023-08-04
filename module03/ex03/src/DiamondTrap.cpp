/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:25:14 by gclement          #+#    #+#             */
/*   Updated: 2023/08/04 12:16:33 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : 
ClapTrap(name + "_clap_name"), 
FragTrap(name), 
ScavTrap(name)
{
	_name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) :
ClapTrap(src._name + "_clap_name"), 
FragTrap(src._name), 
ScavTrap(src._name)
{
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Hello, i am a DiamondTrap and my name is : " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << ": DiamondTrap destructor called" << std::endl;
}
