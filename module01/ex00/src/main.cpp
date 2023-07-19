/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:14:17 by gclement          #+#    #+#             */
/*   Updated: 2023/07/19 13:50:04 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1("Boula");
	zombie1.announce();

	Zombie *zombie2 = newZombie("Bouli");
	zombie2->announce();

	delete zombie2;
	return (0);
}