/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:13:42 by gclement          #+#    #+#             */
/*   Updated: 2023/08/16 13:32:50 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "main.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void) {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const &type) = 0;
};

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_copy[4];
	public :
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource(void);
		MateriaSource &operator=(const MateriaSource &src);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const &type);
};

#endif