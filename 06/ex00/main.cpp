/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:50:49 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/24 17:00:40 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Type 1 argument" << std::endl;
		return(1);

	}
	ScalarConverter::convert(argv[1]);

}
