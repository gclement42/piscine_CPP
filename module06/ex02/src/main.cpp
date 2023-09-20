/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:09:40 by gclement          #+#    #+#             */
/*   Updated: 2023/09/20 10:57:01 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);
}