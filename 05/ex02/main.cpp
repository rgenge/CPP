/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:44:56 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/20 15:34:41 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <iostream>

int main (void)
{
	ShrubberyCreationForm Shrub1("s1");
	Bureaucrat b1("b1", 20); // ok grade
	Bureaucrat b2("b2", 148); // low grade
	RobotomyRequestForm robo1("robo1");
	PresidentialPardonForm pres1("pres1");

	std::cout << "<--Shrubbery-->\n" << std::endl;
	try
	{
		b1.signForm(Shrub1);
	}
	catch(const std::exception& e)
	{
		std::cout << b2.getName() << " " << e.what() << std::endl;
	}
	try
	{
		Shrub1.beSigned(b2);
	}
	catch(const std::exception& e)
	{
		std::cout << b2.getName() << " " << e.what() << std::endl;
	}
	b1.executeForm(Shrub1);
	b2.executeForm(Shrub1);
	std::cout << "<--Roboto-->\n" << std::endl;
	Bureaucrat b3("b3", 20); // ok grade
	Bureaucrat b4("b4", 78); //low grade
	try
	{
		b3.signForm(robo1);
		b4.signForm(robo1);
		b3.executeForm(robo1);
		b4.executeForm(robo1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "<--Presidencial-->\n" << std::endl;
	Bureaucrat b5("b5", 1); // ok grade
	Bureaucrat b6("b6", 24); // low grade
	try
	{
		b5.signForm(pres1);
		b5.executeForm(pres1);
		b6.signForm(pres1);
		b6.executeForm(pres1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

