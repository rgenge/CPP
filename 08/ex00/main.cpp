/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:09:51 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/18 21:13:09 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> myVect;
	for(int i = 0; i < 10; i++)
		myVect.push_back(i);
	for(int i = 0; i < 10; i++)
		std::cout << "myVect : " << i << ": " << easyfind(myVect, i) << std::endl;
	try
	{
		easyfind(myVect, 50);
	}
	catch (const char *e)
	{
		std::cout << "Error: " << e << std::endl;
	}
	try
	{
		easyfind(myVect, 5);
		std::cout <<"myVect[5] : "<< myVect[5]<< std::endl;
	}
	catch (const char *e)
	{
		std::cout << "Error: " << e << std::endl;
	}
}

