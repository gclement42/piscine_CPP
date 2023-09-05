/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:11:48 by gclement          #+#    #+#             */
/*   Updated: 2023/09/05 15:06:11 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Intern
{
	private:
		std::string _formName[3];
		Form *_formArray[3];
	public:
		Intern();
		Intern(const Intern &src);
		~Intern();
		Intern &operator=(const Intern &src);
		Form *makeForm(std::string formName, std::string target);
		class UnknownFormException: public std::exception
		{
			public:
				UnknownFormException();
				UnknownFormException(const UnknownFormException &src);
				~UnknownFormException() throw();
				UnknownFormException &operator=(const UnknownFormException &src);
				virtual const char* what() const throw();
		};
};