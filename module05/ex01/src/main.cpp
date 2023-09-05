/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:40:21 by gclement          #+#    #+#             */
/*   Updated: 2023/09/04 13:35:49 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat tony("Tony", 49);
	Form form1("form1", 148, 148);
	Form form2("form2", 48, 148);

	try
	{
		std::cout << tony << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		tony.signForm(form1);
		tony.signForm(form2);
	}
	catch (Form::FormAlreadySignedException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		tony.incrementGrade();
		std::cout << tony << std::endl;
		tony.signForm(form2);
	}
	catch (Form::FormAlreadySignedException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
}