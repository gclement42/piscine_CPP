/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:58:40 by gclement          #+#    #+#             */
/*   Updated: 2023/07/19 14:40:08 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	
	horde = zombieHorde(5, "Boulaat");
	if (horde == NULL)
		return (0);
	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}