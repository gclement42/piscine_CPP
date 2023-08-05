/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:37:47 by gclement          #+#    #+#             */
/*   Updated: 2023/08/05 10:56:01 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "main.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		void makeSound(void) const;
		~Cat(void);
	private:
		Brain *_brain;
};

#endif