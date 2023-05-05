/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 23:07:52 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/28 08:53:59 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "---Int iterator---"<< std::endl;
	int array[4] = {1,2,3,4};
	::iter<int>(array, 4, print);

	std::cout << "---String iterator---"<< std::endl;
	std::string array2[2] = {"oi","tchau"};
	::iter<std::string>(array2, 2, print);

}
