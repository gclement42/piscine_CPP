/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:59:22 by gclement          #+#    #+#             */
/*   Updated: 2023/07/19 14:31:08 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
}; 

Zombie* zombieHorde(int N, std::string name);

#endif