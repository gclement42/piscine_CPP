/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:25:57 by gclement          #+#    #+#             */
/*   Updated: 2023/08/01 13:44:00 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("Clap");
	ClapTrap trap("Trap");

	for (int i = 0; i < 12; i++)
	{
		clap.attack("Trap");
	}
	clap.attack("Trap");
	trap.takeDamage(0);
	trap.attack("Clap");
	clap.takeDamage(0);
}