/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:28:48 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/01 10:16:01 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), dogBrain(new Brain())
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog &cpy): Animal(cpy), dogBrain(new Brain(*cpy.dogBrain))
{
	*this = cpy;
	std::cout << "Dog copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &cpy)
{
	if (this == &cpy)
		return *this;
	else
		*this->dogBrain = *cpy.dogBrain;
	return *this;
}
Dog::~Dog()
{
	delete this->dogBrain;
	std::cout << "Dog detructor called" << std::endl;
}
void Dog::makeSound(void) const
{
		std::cout << "Au au." << std::endl;
}
std::string Dog::getType(void) const
{
	return (this->type);
}
Brain& Dog::getBrain(void) const
{
	return (*this->dogBrain);
}
void Dog::setBrain(Brain const &dogBrain)
{
	*this->dogBrain = dogBrain;
}
