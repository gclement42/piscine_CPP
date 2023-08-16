/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:13:35 by gclement          #+#    #+#             */
/*   Updated: 2023/08/16 14:11:14 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_copy[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete (_copy[i]);
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		delete (_copy[i]);
		this->_copy[i] = src._copy[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* matiera)
{
	int i;

	i = 0;
	while (i < 4 && this->_copy[i])
		i++;
	this->_copy[i] = matiera->clone();
	delete (matiera);
	std::cout << this->_copy[i]->getType() << " learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i;

	i = 0;
	while (this->_copy[i] && this->_copy[i]->getType() != type)
		i++;
	if (this->_copy[i])
		return (this->_copy[i]->clone());
	std::cout << "createMateria: materia not found" << std::endl;
	return (NULL);
}

