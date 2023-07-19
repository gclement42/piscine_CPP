/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:12:19 by gclement          #+#    #+#             */
/*   Updated: 2023/07/19 15:29:44 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

const std::string &Weapon::getType(void)
{
	const std::string &type = this->_type;
	return (type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}