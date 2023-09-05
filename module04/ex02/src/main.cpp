/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:55:19 by gclement          #+#    #+#             */
/*   Updated: 2023/08/29 14:03:15 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	Animal *animal[100];

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
		animal[i]->makeSound();
	}
	dog = doug;
	for (int i = 0; i < 100; i++)
	{
		delete animal[i];
	}
	delete dog;
	delete kit;
}