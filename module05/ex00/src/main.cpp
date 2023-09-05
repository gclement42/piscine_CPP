/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:40:21 by gclement          #+#    #+#             */
/*   Updated: 2023/09/04 09:05:24 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat Tony("Tony", 149);
		std::cout << Tony;
		Bureaucrat Mairo("Mairo", 1);
		std::cout << Mairo;
		Bureaucrat Finito("Finito", 151);
		std::cout << Finito;
		Bureaucrat Tata("Tata", -1);
		std::cout << Tata;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}	
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}	
}