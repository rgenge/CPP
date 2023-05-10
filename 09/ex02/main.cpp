/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:00:51 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/07 16:41:21 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv)
{
	try
	{
		if (argc < 2)
			throw ("Invalid input");
		PmergeMe merge;
		merge.init(argv);
//		merge.printNumbers();
	}
	catch(const char *msg)
	{
		std::cerr << msg << std::endl;
	}

}
