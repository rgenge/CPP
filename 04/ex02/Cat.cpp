/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:28:30 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/04 23:28:50 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), catBrain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::~Cat()
{
	delete this->catBrain;
	std::cout << "Cat destructor Called" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy), catBrain(new Brain(*cpy.catBrain))
{
	*this = cpy;
	std::cout << "Cat Copy Constructor Called" << std::endl;
}
Cat &Cat::operator = (const Cat &cpy)
{
	if (this == &cpy)
		return *this;
	else
		*this->catBrain = *cpy.catBrain;
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
Brain& Cat::getBrain(void) const
{
	return (*this->catBrain);
}
void Cat::setBrain(Brain const &catBrain)
{
	*this->catBrain = catBrain;
}
