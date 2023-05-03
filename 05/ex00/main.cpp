/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:44:56 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/21 19:05:36 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main (void)
{
	std::cout << "---Bureaucrat tester---" << std::endl;
	Bureaucrat test("test" , 4);
	Bureaucrat test2("test2", 148);
	Bureaucrat stream("stream", 2);
	std::cout << "---Bureaucrat test---" << std::endl;
	try
	{
		std::cout << stream << std::endl;
		test.Increment();
		test.Increment();
		std::cout << test.getName()<< " grade "<< test.getGrade()<< std::endl;
		test.Increment();
		test.Increment();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---Bureaucrat tester2---" << std::endl;
	try
	{
		test2.Decrement();
		test2.Decrement();
		test2.Decrement();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << test << std::endl;
	std::cout << test2 << std::endl;
}
