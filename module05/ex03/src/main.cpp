/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:40:21 by gclement          #+#    #+#             */
/*   Updated: 2023/09/05 14:54:34 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern;
	Form *form1;
	
	form1 = intern.makeForm("presidential pardon", "Julian Assange");
	std::cout << *form1 << std::endl;
	form1 = intern.makeForm("shrubbery creation", "Julian Assange");
	std::cout << *form1 << std::endl;
	form1 = intern.makeForm("robotomy request", "Julian Assange");
	std::cout << *form1 << std::endl;
	form1 = intern.makeForm("robotomy requet", "Julian Assange");
	std::cout << *form1 << std::endl;
}