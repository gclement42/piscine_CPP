/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:15:36 by gclement          #+#    #+#             */
/*   Updated: 2023/07/19 13:33:58 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name) 
{
	Zombie *zombie;

	try
	{
		zombie = new Zombie(name);
	}
	catch(std::bad_alloc &e)
	{
		std::cerr << e.what() << '\n';
		return (NULL);
	}
	return (zombie);
}