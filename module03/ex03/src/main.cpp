/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:24:23 by gclement          #+#    #+#             */
/*   Updated: 2023/08/04 12:17:04 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Diamond");

	diamond.attack("Frag");
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.whoAmI();
}