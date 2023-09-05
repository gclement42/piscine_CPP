/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:30:34 by gclement          #+#    #+#             */
/*   Updated: 2023/08/29 13:58:59 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "main.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter() {};
		virtual std::string const &getName(void) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria 	*_inventory[4];
		AMateria	*_garbage;
	public:
		Character(std::string name);
		Character(const Character &src);
		Character &operator=(const Character &src);
		~Character(void);
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);	
		void emptyGarbage(void);
};

#endif