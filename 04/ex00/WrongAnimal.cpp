/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:27:10 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/06 21:44:48 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	*this = cpy;
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}
WrongAnimal &WrongAnimal::operator = (const WrongAnimal &cpy)
{
	this->type = cpy.type;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Some WrongAnimal sound" << std::endl;
}
std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
