/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:46:42 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/07 15:39:11 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw "Type ./RPN \"num1 num2 operator num3 operator\"";
		RPN rpn;
		rpn.calc(argv[1]);
	}
 	catch(const char *msg)
 	{
 		std::cerr << msg << '\n';
 	}
}
