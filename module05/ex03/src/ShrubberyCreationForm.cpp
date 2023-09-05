/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:40:45 by gclement          #+#    #+#             */
/*   Updated: 2023/09/05 14:44:48 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <bits/stdc++.h> 

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	:Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
	:Form(src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	this->_target = src._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (checkGrade(executor) == false)
		return;
	std::string fileName = this->_target + "_shrubbery";
	char name[fileName.length() + 1];
	std::strcpy(name, fileName.c_str());
	std::ofstream file(name);
	if (file.is_open())
	{
		file << +"        # #### ####\n";
		file << "      ### \\/#|### |/####\n";
		file << "     ##\\/#/ \\||/##/_/##/_#\n";
		file << "   ###  \\/###|/ \\/ # ###\n";
		file << " ##_\\_#\\_\\## | #/###_/_####\n";
		file << "## #### # \\ #| /  #### ##/##\n";
		file << " __#_--###`  |{,###---###-~\n";
		file << "           \\ }{		\n";
		file << "           \\ }}{		\n";
		file << "           \\ }}{		\n";
		file << "           \\ }}{		\n";
		file << "      -_^-,_ -=-~{ .-^- __-\n";
		file.close();
	}
	else
		std::cout << "Unable to open file" << std::endl;
}

void ShrubberyCreationForm::changeTarget(std::string target)
{
	this->_target = target;
}