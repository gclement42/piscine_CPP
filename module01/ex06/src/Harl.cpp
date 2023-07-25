/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:37:24 by gclement          #+#    #+#             */
/*   Updated: 2023/07/25 10:59:02 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(int level)
{
	switch (level)
	{
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:	
			error();
			break;
		default:
			break;
	}
}

void Harl::debug(void)
{
	std::cout << "[DEBUG] : This is a debug message" << std::endl;
	info();
}

void Harl::info(void)
{
	std::cout << "[INFO] : This is an info message" << std::endl;
	warning();
}

void Harl::warning(void)
{
	std::cout << "[WARNING] : This is a warning message" << std::endl;
	error();
}

void Harl::error(void)
{
	std::cout << "[ERROR] : This is an error message" << std::endl;
}