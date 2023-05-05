/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 23:07:52 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/03 15:43:23 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "---Array test---"<< std::endl;
	Array<int> numbers(5);
	Array<int> copy(10);
	int *mirror = new int[10];
	srand(time(NULL));

	std::cout << "---Original---"<< std::endl;
	for (int i = 0; i < 10; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << mirror[i] << " i:" << i << std::endl;
	}
	copy = numbers;
	std::cout << "---Copy---"<< std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << copy[i] << " i:" << i << std::endl;
	std::cout << "---Error---"<< std::endl;
	Array<int> errorArray(10);
	try {
		errorArray[10] = 10;
	} catch (std::exception &e) {
		std::cout << "Index out of range" << std::endl;
	}
	delete[] mirror;
}
