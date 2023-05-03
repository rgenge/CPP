/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:54:59 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/09 15:41:45 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->size = 0;
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
}
void	print_text(std::string str)
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		j = 0;
		while (j++ < 10 - str.length())
			std::cout << " ";
		std::cout << str;
	}
}

int 	PhoneBook::get_size() const
{
	return (this->size);
}

void	PhoneBook::add_contact(std::string data[5])
{
	this->contacts[this->index].setName(data[0]);
	this->contacts[this->index].setLastName(data[1]);
	this->contacts[this->index].setNickName(data[2]);
	this->contacts[this->index].setPhone(data[3]);
	this->contacts[this->index].setSecret(data[4]);
	this->index = (this->index + 1) % 8;
	if (this->size < 8)
		this->size++;
}

void	PhoneBook::print_contact(int i) const
{
	std::cout <<  "----Contact information----"  << std::endl;
	std::cout << "First Name: " << this->contacts[i].getName() << std::endl;
	std::cout << "Last Name: " << this->contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].getNickName() << std::endl;
	std::cout << "Number: " << this->contacts[i].getPhone() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[i].getSecret() << std::endl;
}

void	PhoneBook::print_phonebook() const
{
	int i;

	i = 0;
	std::cout << "+----------X----------X----------X----------X" << std::endl;
	std::cout << "|  index   |first name| last name| nickname |" << std::endl;
	std::cout << "+----------X----------X----------X----------X" << std::endl;
	while (i < this->size)
	{
		std::cout  << "|" ;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i;
		std::cout << "|" ;
		print_text(this->contacts[i].getName());
		std::cout  << "|" ;
		print_text(this->contacts[i].getLastName());
		std::cout << "|" ;
		print_text(this->contacts[i].getNickName());
		std::cout << "|"  << std::endl;
		std::cout << "+----------X----------X----------X----------X"  << std::endl;
		i++;
	}
}

