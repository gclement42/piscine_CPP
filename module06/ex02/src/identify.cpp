/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:15:32 by gclement          #+#    #+#             */
/*   Updated: 2023/09/20 10:53:29 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
	time_t *t = NULL;

	std::srand(std::time(t));
	int rand = std::rand();
	if (rand % 3 == 0)
		return (new A);
	if (rand % 2 == 0)
		return (new B);
	return (new C);
}

void identify(Base *p)
{
	A *a;
	B *b;
	C *c;

	std::cout << "the type is : ";
	a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	std::cout << "the type is : ";
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void) a;
	}
	catch (...){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void) b;
	}
	catch (...){}	
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void) c;
	}
	catch (...){}
}