/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:27:10 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/07 21:27:14 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor Called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	*this = cpy;
	std::cout << "Animal Copy Constructor Called" << std::endl;
}
Animal &Animal::operator = (const Animal &cpy)
{
	this->type = cpy.type;
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "Some animal sound" << std::endl;
}
std::string Animal::getType(void) const
{
	return (this->type);
}
