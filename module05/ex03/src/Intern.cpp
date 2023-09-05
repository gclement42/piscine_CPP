/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:12:03 by gclement          #+#    #+#             */
/*   Updated: 2023/09/05 14:50:08 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	this->_formName[0] = "robotomy request";
	this->_formName[1] = "presidential pardon";
	this->_formName[2] = "shrubbery creation";
	_formArray[0] = new RobotomyRequestForm("NULL");
	_formArray[1] = new PresidentialPardonForm("NULL");
	_formArray[2] = new ShrubberyCreationForm("NULL");
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern()
{
	delete _formArray[0];
	delete _formArray[1];
	delete _formArray[2];
}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	int i;
	Form *form;

	i = 0;
	while (formName != this->_formName[i] && i < 3)
		i++;
	if (i == 3)
	{
		std::cout << "Form name not found" << std::endl;
		return (NULL);
	}
	this->_formArray[i]->changeTarget(target);
	form = this->_formArray[i];
	return (form);
}