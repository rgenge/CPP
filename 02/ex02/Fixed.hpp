/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/10 18:19:19 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fixedPoint;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed(Fixed const &cpy);
		/*Simples operators*/
		Fixed operator+(Fixed const &val2) const;
		Fixed operator-(Fixed const &val2) const;
		Fixed operator*(Fixed const &val2) const;
		Fixed operator/(Fixed const &val2) const;
		/*Iterators*/
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);
		/*Bool Operators*/
		bool operator>(const Fixed &val2) const;
		bool operator>=(const Fixed &val2) const;
		bool operator<(const Fixed &val2) const;
		bool operator<=(const Fixed &val2) const;
		bool operator==(const Fixed &val2) const;
		bool operator!=(const Fixed &val2) const;
		/*Min Max Operator*/
		static Fixed& min(Fixed &val1, Fixed &val2);
		static Fixed const &min(Fixed const &val1, Fixed const &val2);
		static Fixed& max(Fixed &val1, Fixed &val2);
		static Fixed const &max(Fixed const &val1, Fixed const &val2);


		Fixed &operator=(Fixed const &cpy);
		int	getRawBits (void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator << (std::ostream &os, Fixed const &dt);

#endif
