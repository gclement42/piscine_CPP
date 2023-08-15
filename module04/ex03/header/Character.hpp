/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:30:34 by gclement          #+#    #+#             */
/*   Updated: 2023/08/15 13:00:05 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "main.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter(void) {};
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
	public:
		Character(std::string name);
		Character(const Character &src);
		~Character(void);
		Character &operator=(const Character &src);
}

#endif