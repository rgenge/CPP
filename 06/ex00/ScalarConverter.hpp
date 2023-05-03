/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:48:33 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/24 16:58:58 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter ();
		~ScalarConverter ();
		static char			toChar(const std::string input);
		static int			toInt(const std::string input);
		static float		toFloat(const std::string input);
		static double		toDouble(const std::string input);
		static int			checkDigit(const std::string input);
	public:
		static void			convert (const std::string input);

};
#endif
