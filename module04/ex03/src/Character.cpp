/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:31:04 by gclement          #+#    #+#             */
/*   Updated: 2023/08/15 13:58:16 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	*this = src;
}

Character &Character::operator(const Character &src)
{
	for (int i = 0; i < 4; i++)
	{
		delete (_inventory[i]);
		this->_inventory[i] = src._inventory[i];
	}
	this->_name = src._name;
}

std::string const & Character::getName() const
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

void Character::unequip(int idx)
{
	if (idx > 3 || !this->_inventory[i])
		std::cout << "This materia doesn't exist" << std::endl;
	
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || !this->_inventory[i])
		std::cout << "This materia doesn't exist" << std::endl;
	else if (this->_inventory[i].getType() == "ice")
		std::cout <<  "* shoots an ice bolt at " << this.target.getName() << " *" << std::endl;	
	else if (this->_inventory[i].getType() == "cure")
		std::cout <<  "* heals " << this.target.getName() << "'s wounds *" << std::endl;
}