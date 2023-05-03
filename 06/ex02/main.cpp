/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 21:55:58 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/27 22:58:52 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>

Base* generate(void)
{
	 srand(time(NULL));
	switch(rand() % 3)
	{
		case 0:
		{
			std::cout << "Type A created." << std::endl;
			return new A;
		}
		case 1:
		{
			std::cout << "Type B created." << std::endl;
			return new B;
		}
		case 2:
		{
			std::cout << "Type C created" << std::endl;
			return new C;
		}
	}
	return(NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A pointer." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B pointer." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C pointer." << std::endl;
	else
		std::cout << "Unknown type." << std ::endl;

}
void identify(Base& p)
{
	try
	{
		(void) dynamic_cast <A& >(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception & e) {}
	try
	{
		(void) dynamic_cast <B& >(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception & e) {}
	try
	{
		(void) dynamic_cast <C& >(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception & e) {}
}

int main()
{
	Base * p = generate();
	std::cout << "p : ";
	identify(p);
	std::cout << "*p: ";
	identify(*p);
	delete p;
}
