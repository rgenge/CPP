/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:28:30 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/06 21:42:45 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	*this = cpy;
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}
WrongCat &WrongCat::operator = (const WrongCat &cpy)
{
	this->type = cpy.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Miauuu" << std::endl;
}
std::string WrongCat::getType(void) const
{
	return (this->type);
}
