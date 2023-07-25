/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:37:26 by gclement          #+#    #+#             */
/*   Updated: 2023/07/25 10:59:32 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getLevel(std::string level)
{
	int	i;

	std::string levelList[4] = 
	{
		"DEBUG", 
		"INFO", 
		"WARNING", 
		"ERROR"
	};
	i = 0;
	while (i < 4 && levelList[i] != level)
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int	i;
	Harl harl;
	
	(void) argc;
	if (argc != 2)
	{
		std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return (1);
	}
	i = getLevel(argv[1]);
	harl.complain(i);
	return (0);
}