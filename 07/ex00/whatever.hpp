/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 23:07:49 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/27 23:20:31 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap (T& a, T& b)
{
	std::cout << "swapping" << a << " and " << b <<std::endl;
	T temp = a;
	a = b;
	b = temp;
}
template <typename T>
T min (T& a, T& b)
{
	if (a < b)
		return a;
	else
		return b;
}
template <typename T>
T max (T& a, T& b)
{
	if (a > b)
		return a;
	else
		return b;
}
