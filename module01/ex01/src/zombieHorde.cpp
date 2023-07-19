/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:59:00 by gclement          #+#    #+#             */
/*   Updated: 2023/07/19 14:32:38 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde;

	try
	{
		horde = new Zombie[N];
	}
	catch(std::bad_alloc &e)
	{
		std::cout << "Error: memory allocation failed" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}