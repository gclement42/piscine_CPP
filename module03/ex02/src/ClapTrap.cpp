/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:25:59 by gclement          #+#    #+#             */
/*   Updated: 2023/08/01 13:46:06 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name)
{
	std::cout << _name << ": ClapTrap constructor called" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << ": ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		std::cout << _name << " is dead" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		std::cout << _name << " is dead" << std::endl;
		return ;
	}
	_hitPoints += amount;
	_energyPoints--;
	std::cout << _name << " is repaired by " << amount << " points!" << std::endl;
}