/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:34:25 by gclement          #+#    #+#             */
/*   Updated: 2023/08/04 13:52:38 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		~Animal(void);
};

#endif