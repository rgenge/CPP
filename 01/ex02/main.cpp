/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/19 12:12:38 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string;
	std::string *stringPtr;

	string = "HI THIS IS BRAIN";
	stringPtr = &string;
	std::string &stringRef = string;
	std::cout << "String addres: " << &string << std::endl;
	std::cout << "Pointer addres: " << stringPtr << std::endl;
	std::cout << "Reference addres: " << &stringRef << std::endl;
	std::cout << "String value: " << string << std::endl;
	std::cout << "StringPtr value: " << *stringPtr << std::endl;
	std::cout << "StringRef value: " << stringRef << std::endl;

}
