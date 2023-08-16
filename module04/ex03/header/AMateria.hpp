/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:29:35 by gclement          #+#    #+#             */
/*   Updated: 2023/08/16 12:52:07 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "main.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria & src);
		AMateria &operator=(const AMateria &src);
		virtual ~AMateria(void);
		std::string const &getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter &target);
};

#endif