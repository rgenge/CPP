/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:54:59 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/03 11:32:38 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	data[5];
	std::string	input;
	int 		index;
	int			j;

	while (1)
	{
		for(int i = 0; i < 5; i++)
			data[i] = "";
		std::cout << "-----PhoneBook------" << std::endl;
		std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			while(data[FIRST] == "")
			{
				std::cout << "Type First Name: ";
				std::getline(std::cin, data[FIRST]);
			}
			while(data[LAST] == "")
			{
				std::cout << "Type Last Name: ";
				std::getline(std::cin, data[LAST]);
			}
			while(data[NICK] == "")
			{
				std::cout << "Type NickName: ";
				std::getline(std::cin, data[NICK]);
			}
			while(data[PHONE] == "")
			{
				std::cout << "Type PhoneNumber: ";
				std::getline(std::cin, data[PHONE]);
			}
			j = -1;
			while(data[PHONE][++j])
				if (!isdigit(data[PHONE][j]))
				{
					std::cout << "PhoneNumber has letters or special chars" << std::endl;
					break;
				}
			while(data[SECRET] == "")
			{
				std::cout << "Type Darkest Secret: ";
				std::getline(std::cin, data[SECRET]);
			}
			phonebook.add_contact(data);
			std::cout << "-----Contact Added -----" << std::endl;
		}
		else if (input == "SEARCH")
		{
			phonebook.print_phonebook();
			std::cout << "\n Type Index: ";
			std::cin >> index;
			if (!std::cin || index < 0 || index >= phonebook.get_size())
			{
				std::cout << "Invalid Index!\n" << std::endl;
				std::cin.clear();
				std::getline(std::cin, input);
				continue;
			}
			phonebook.print_contact(index);
			std::cin.clear();
			std::getline(std::cin, input);
			continue;
		}
		else if (input == "EXIT")
			return(0);
		else
			std::cout << "Invalid command" << std::endl;
	}
}

