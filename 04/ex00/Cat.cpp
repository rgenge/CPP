/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:28:30 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/06 21:32:11 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor Called" << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	*this = cpy;
	std::cout << "Cat Copy Constructor Called" << std::endl;
}
Cat &Cat::operator = (const Cat &cpy)
{
	this->type = cpy.type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Miauuu" << std::endl;
}
std::string Cat::getType(void) const
{
	return (this->type);
}
