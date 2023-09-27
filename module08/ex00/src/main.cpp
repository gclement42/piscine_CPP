/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 07:33:04 by gclement          #+#    #+#             */
/*   Updated: 2023/09/27 07:33:05 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int>	Vector;

	for (int i = 0; i < 10; i++)
	{
		Vector.push_back(i);
	}
	easyfind(Vector, 2);
	easyfind(Vector, 5);
	easyfind(Vector, 11);
	return (0);
}