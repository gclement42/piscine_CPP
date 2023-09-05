/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:31:04 by gclement          #+#    #+#             */
/*   Updated: 2023/08/29 14:00:13 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_garbage = NULL;
}

Character::Character(const Character &src)
{
	*this = src;
}

Character &Character::operator=(const Character &src)
{
	for (int i = 0; i < 4; i++)
	{
		delete (_inventory[i]);
		this->_inventory[i] = src._inventory[i];
	}
	this->_name = src._name;
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	delete _garbage;
	std::cout << "Character " << this->_name << " is dead" << std::endl;
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int i;

	i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (i == 3)
		std::cout << "Inventory is full !" << std::endl;
	else
		this->_inventory[i] = m;
}

void Character::emptyGarbage(void)
{
	delete _garbage;
}

void Character::unequip(int idx)
{
	if (!this->_inventory[idx])
	{
		std::cout << "Unequip : This materia doesn't exist" << std::endl;
		return ;
	}
	std::cout << "Unequip : " << this->_inventory[idx]->getType() << std::endl;
	if (_garbage == NULL)
		this->emptyGarbage();
	_garbage = this->_inventory[idx];
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "This materia doesn't exist" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}