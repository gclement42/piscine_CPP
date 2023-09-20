/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:15:04 by gclement          #+#    #+#             */
/*   Updated: 2023/09/20 08:59:30 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.h"

int main()
{
	Data data;

	data.a = 42;
	data.b = 21;
	std::cout << "data.a: " << data.a << std::endl;
	std::cout << "data.b: " << data.b << std::endl;
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "raw: " << raw << std::endl;
	Data *ptr = Serializer::deserialize(raw);
	std::cout << "ptr->a: " << ptr->a << std::endl;
	std::cout << "ptr->b: " << ptr->b << std::endl;
	return (0);
}