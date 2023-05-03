/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/10 18:17:22 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void)
{
	std::cout <<"Default constructor called" << std::endl;
	this->fixedPoint = 0;
}
Fixed::~Fixed (void)
{
	std::cout <<"Default destructor called" << std::endl;
}
Fixed::Fixed(Fixed const &cpy)
{
	std::cout <<"Copy constructor called" << std::endl;
	*this = cpy;
}
Fixed &Fixed::operator=(Fixed const &cpy)
{
	std::cout <<"Copy assignment operator called" << std::endl;
	this->fixedPoint = cpy.getRawBits();
	return(*this);
}
int	Fixed::getRawBits (void) const
{
	std::cout <<"getRawBits member function called" << std::endl;
	return(this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

