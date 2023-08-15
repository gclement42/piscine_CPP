/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:39:49 by gclement          #+#    #+#             */
/*   Updated: 2023/08/14 09:30:38 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "main.hpp"

class Ice: public AMateria
{
	public :
		Ice(void);
		Ice(const Ice & src);
		~Ice(void);
		Ice &operator=(const Ice &src);
		Ice *clone() const;
};

#endif