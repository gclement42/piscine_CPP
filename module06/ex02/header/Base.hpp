/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:11:08 by gclement          #+#    #+#             */
/*   Updated: 2023/09/20 10:40:33 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
	public :
		virtual ~Base(){};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void);
void identify(Base *p);

#endif