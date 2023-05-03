/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:28:48 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/04 23:15:55 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}
Dog::Dog(const Dog &cpy)
{
	*this = cpy;
	std::cout << "Dog copy constructor called." << std::endl;
}
Dog &Dog::operator=(const Dog &cpy)
{
	this->type = cpy.type;
	return *this;
}
Dog::~Dog()
{
	std::cout << "Dog detructor called." << std::endl;
}
void Dog::makeSound(void) const
{
		std::cout << "Au au." << std::endl;
}
std::string Dog::getType(void) const
{
	return (this->type);
}
