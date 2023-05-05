/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:01:17 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/04 14:20:22 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout<< "---Basic test----"<< std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout<< "---Invalid test---"<< std::endl;
	Span sp2 = Span(4);
	sp2.addNumber(9);
	try
	{
		std::cout<< sp2.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout<< "---Multiple numbers test---"<< std::endl;
	Span sp3 = Span(5);

	std::vector<unsigned int> v;
	for (unsigned int i = 1; i < 5; i++)
		v.push_back(i);
	sp3.fillNumber(v.begin(),v.end());

	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	std::cout<< "---Invalid test---"<< std::endl;
	try
	{
		Span sp4 = Span(4);
		std::vector<unsigned int> v2;
		for (unsigned int i = 1; i < 5; i++)
			v2.push_back(i);
		sp4.fillNumber(v2.begin(),v2.end());
		sp4.addNumber(9);
		std::cout<< sp4.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout<< "---Big numbers test---"<< std::endl;
	Span sp5 = Span(15000);
	std::vector<unsigned int> v3;
	for (unsigned int i = 1; i < 15001; i++)
		v3.push_back(i);
	sp5.fillNumber(v3.begin(),v3.end());

	std::cout << sp5.shortestSpan() << std::endl;
	std::cout << sp5.longestSpan() << std::endl;
	std::cout<< "---Copy assign test where sp7 = sp5---"<< std::endl;
	Span sp6(sp5);
	Span sp7(0);
	sp7 = sp6;
	std::cout << sp7.longestSpan()<< std::endl;
}
