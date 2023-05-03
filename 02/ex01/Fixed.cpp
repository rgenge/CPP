/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/10 18:18:28 by acosta-a         ###   ########.fr       */
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
	std::cout <<"Destructor called" << std::endl;
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
	return(this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}
Fixed::Fixed(const int value)
{
	std::cout <<"Int constructor called" << std::endl;
	this->fixedPoint = value << Fixed::bits;
}
Fixed::Fixed(const float value)
{
	std::cout <<"Float constructor called" << std::endl;
	this->fixedPoint = roundf(value * (1 << Fixed::bits));
}
float Fixed::toFloat(void) const
{
	return ((float)(this->fixedPoint) / (float)(1 << Fixed::bits));
}
int Fixed::toInt(void) const
{
	return (this->fixedPoint >> Fixed::bits);
}
std::ostream &operator << (std::ostream &os, Fixed const &dt)
{
	std::cout << dt.toFloat();
	return os;
}
