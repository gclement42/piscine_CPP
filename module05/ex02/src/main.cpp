/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:40:21 by gclement          #+#    #+#             */
/*   Updated: 2023/09/05 12:58:13 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		PresidentialPardonForm form1("Julian Assange");
		RobotomyRequestForm form2("Bender");
		ShrubberyCreationForm form3("home");
		Bureaucrat bureaucrat1("bureaucrat1", 1);
		
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
		bureaucrat1.signForm(form1);
		bureaucrat1.signForm(form2);
		bureaucrat1.signForm(form3);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
		form1.execute(bureaucrat1);
		form2.execute(bureaucrat1);
		form3.execute(bureaucrat1);
		bureaucrat1.signForm(form1);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::NotSignedException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::FormAlreadySignedException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;
	try
	{
		PresidentialPardonForm form1("Julian Assange");
		RobotomyRequestForm form2("Bender");
		ShrubberyCreationForm form3("home");
		Bureaucrat bureaucrat1("bureaucrat1", 80);
		
		std::cout << bureaucrat1 << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
		bureaucrat1.signForm(form1);
		bureaucrat1.signForm(form2);
		bureaucrat1.signForm(form3);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
		form1.execute(bureaucrat1);
		form2.execute(bureaucrat1);
		form3.execute(bureaucrat1);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::NotSignedException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::FormAlreadySignedException &e)
	{
		std::cout << e.what() << std::endl;
	}
}