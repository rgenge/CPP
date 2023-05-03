/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:44:56 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/20 22:47:39 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main (void)
{
	try
	{
		Form formtest("formtest" , 10, 5);
		Form formtest2("formtest" , 1000, 5);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form formtest3("formtest" , -20, 5);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Form formtest4("formtest" , 40, 5);
	Bureaucrat b1("b1" , 50);
	Bureaucrat b2("b2", 148);
	Bureaucrat b3("b3", 2);
	try
	{
		formtest4.beSigned(b1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	formtest4.beSigned(b3);
	try
	{
		b1.signForm(formtest4);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << formtest4 <<std::endl;

}

