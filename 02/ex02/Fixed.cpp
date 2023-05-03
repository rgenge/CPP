/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/10 18:19:15 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void)
{
	this->fixedPoint = 0;
}
Fixed::~Fixed (void)
{
}
Fixed::Fixed(Fixed const &cpy)
{
	*this = cpy;
}
Fixed &Fixed::operator=(Fixed const &cpy)
{
	this->fixedPoint = cpy.getRawBits();
	return(*this);
}
Fixed Fixed::operator+(Fixed const &val2) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() + val2.getRawBits());
	return(res);
}
Fixed Fixed::operator-(Fixed const &val2) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() - val2.getRawBits());
	return(res);
}
Fixed Fixed::operator*(Fixed const &val2) const
{
	Fixed res;
	res.setRawBits((this->getRawBits() * val2.getRawBits()) >> Fixed::bits);
	return(res);
}
Fixed Fixed::operator/(Fixed const &val2) const
{
	if (val2.getRawBits() == 0)
		std::cerr << "Division by Zero" << std::endl;
	return(Fixed(this->toFloat() / val2.toFloat()));
}
Fixed& Fixed:: operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}
Fixed Fixed:: operator++(int)
{
	Fixed	num(*this);
	this->setRawBits(this->getRawBits() + 1);
	return(num);
}
Fixed& Fixed:: operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}
Fixed Fixed:: operator--(int)
{
	Fixed	num(*this);
	this->setRawBits(this->getRawBits() - 1);
	return(num);
}
bool Fixed::operator>(const Fixed &val2) const
{
	return (this->getRawBits() > val2.getRawBits());
}
bool Fixed::operator>=(const Fixed &val2) const
{
	return (this->getRawBits() >= val2.getRawBits());
}
bool Fixed::operator<(const Fixed &val2) const
{
	return (this->getRawBits() < val2.getRawBits());
}
bool Fixed::operator<=(const Fixed &val2) const
{
	return (this->getRawBits() <= val2.getRawBits());
}
bool Fixed::operator==(const Fixed &val2) const
{
	return (this->getRawBits() == val2.getRawBits());
}
bool Fixed::operator!=(const Fixed &val2) const
{
	return (this->getRawBits() != val2.getRawBits());
}
Fixed &Fixed::min(Fixed &val1, Fixed &val2)
{
	return (val1 < val2 ? val1 : val2);
}
Fixed const &Fixed::min(Fixed const &val1, Fixed const &val2)
{
	return (val1 < val2 ? val1 : val2);
}
Fixed &Fixed::max(Fixed &val1, Fixed &val2)
{
	return (val1 > val2 ? val1 : val2);
}
Fixed const &Fixed::max(Fixed const &val1, Fixed const &val2)
{
	return (val1 > val2 ? val1 : val2);
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
	this->fixedPoint = value << Fixed::bits;
}
Fixed::Fixed(const float value)
{
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
