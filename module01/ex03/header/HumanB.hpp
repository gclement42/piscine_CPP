/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:12:32 by gclement          #+#    #+#             */
/*   Updated: 2023/08/20 10:41:03 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon &weapon);
};

# endif