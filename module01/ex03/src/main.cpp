/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:12:26 by gclement          #+#    #+#             */
/*   Updated: 2023/07/19 15:48:23 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	Weapon AK47 = Weapon("AK47");
	HumanA bob("Bob", AK47);
	bob.attack();
	HumanB jim("Jim");
	// jim.setWeapon(AK47);
	jim.attack();
	return (0);
}