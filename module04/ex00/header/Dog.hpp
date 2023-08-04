/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:53:23 by gclement          #+#    #+#             */
/*   Updated: 2023/08/04 13:51:37 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		void makeSound(void) const;
		~Dog(void);
};

#endif