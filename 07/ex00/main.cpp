/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 23:07:52 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/27 23:23:55 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a,b,c;
	std::string name1, name2;
	a = 2;
	b = 4;
	c = 4;
	name1 = "oi";
	name2 = "tchau";

	std::cout << "name1: " << name1 << " name2: " << name2 << std::endl;
	swap(name1, name2);
	std::cout << "name1: " << name1 << " name2: " << name2 << std::endl;

	std::cout << "min: " << min(a,b) << std::endl;
	std::cout << "max: " << max(a,b) << std::endl;
	std::cout << "equal: " << min(b,c) << std::endl;
	std::cout << "equal: " << min(c,b) << std::endl;

}
