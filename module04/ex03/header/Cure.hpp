/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:30:12 by gclement          #+#    #+#             */
/*   Updated: 2023/08/14 09:34:40 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "main.hpp"

class Cure: public AMateria
{
	public :
		Cure(void);
		Cure(const Cure & src);
		~Cure(void);
		Cure &operator=(const Cure &src);
		Cure *clone() const;
};

#endif

