/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:04:24 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/21 19:03:13 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
}

Intern &Intern::operator=(const Intern &cpy)
{
	(void) cpy;
	return *this;
}

const char* Intern::InvalidInput::what() const throw()
{
	return "Invalid Input";
}

AForm *Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
	AForm *result;
	std::string funcType[] = {std::string ("Shrubbery"), std::string("Robotomy"), std::string("Presidential")};
	AForm *callFunction[] = {new ShrubberyCreationForm(formTarget), new RobotomyRequestForm(formTarget), new PresidentialPardonForm(formTarget)};
	result = NULL;
	int flag = 0;
	for(int  i = 0; i < 3; i++)
	{
		if(formName == funcType[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			result = callFunction[i];
			flag = 1;
		}
		else
		{
			delete callFunction[i];
		}
	}
	if (flag == 0)
		throw Intern::InvalidInput();
	return result;
}
