/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:28:30 by gclement          #+#    #+#             */
/*   Updated: 2023/07/25 10:30:31 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
	int i;

	void (Harl::*functionPtr[4])(void) = 
	{
		&Harl::debug, 
		&Harl::info, 
		&Harl::warning, 
		&Harl::error
	};
	std::string levelList[4] = 
	{
		"DEBUG", 
		"INFO", 
		"WARNING", 
		"ERROR"
	};
	i = 0;
	while (i < 4)
	{
		if (level == levelList[i])
			(this->*functionPtr[i])();
		i++;
	}
}

void Harl::debug(void)
{
	std::cout << "[DEBUG] : This is a debug message" << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ERROR] : This is an error message" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO] : This is an info message" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING] : This is a warning message" << std::endl;
}