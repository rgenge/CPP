/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:51:29 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/07 00:04:35 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Enter ./btc input.txt" << std::endl;
		return (1);
	}
	BitcoinExchange bit;
	bit.readData("data.csv");
	bit.readInput(argv[1]);
	return (0);
}
