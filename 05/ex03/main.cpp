/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:44:56 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/21 18:52:34 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main (void)
{
	Intern someRandomIntern;
	Bureaucrat	me("me", 1);
	AForm *rrf = someRandomIntern.makeForm("Shrubbery", "Tree");
	std::cout <<"--------Shrubbery Intern-------"<< std::endl;
	try
	{
		me.signForm(*rrf);
		rrf->execute(me);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		delete rrf;
		std::cout << e.what() << std::endl;
	}
	Intern someRandomIntern2;
	someRandomIntern2 = someRandomIntern;
	AForm *rrf2 = someRandomIntern2.makeForm("Presidential", "CopyTest");
	std::cout <<"-------Presidential Intern-------"<< std::endl;
	try
	{
		me.signForm(*rrf2);
		rrf2->execute(me);
		delete rrf2;
	}
	catch(const std::exception& e)
	{
		delete rrf2;
		std::cout << e.what() << std::endl;
	}

	Intern someRandomIntern3;
	Bureaucrat	me2("me2", 150);
	AForm *rrf3 = someRandomIntern3.makeForm("Shrubbery", "Tree");
	std::cout <<"-----------Low Grade----------"<< std::endl;
	try
	{
		me2.signForm(*rrf3);
		rrf3->execute(me2);
		delete rrf3;
	}
	catch(const std::exception& e)
	{
		delete rrf3;
		std::cout << e.what() << std::endl;
	}

	Intern someRandomIntern4;
	Bureaucrat	me4("me4", 1);
	AForm *rrf4 = someRandomIntern4.makeForm("Robotomy", "Robo");
	std::cout <<"--------Robotomy Intern-------"<< std::endl;
	try
	{
		me4.signForm(*rrf4);
		rrf4->execute(me4);
		delete rrf4;
	}
	catch(const std::exception& e)
	{
		delete rrf4;
		std::cout << e.what() << std::endl;
	}
	std::cout <<"--------Error-------"<< std::endl;
	try
	{
		Intern someRandomIntern5;
		AForm *rrf5 = someRandomIntern5.makeForm("Error", "Robo");
		delete rrf5;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

