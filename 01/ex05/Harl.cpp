/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:20:04 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/22 22:33:49 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl (void)
{
}
Harl::~Harl (void)
{
}
void Harl::debug(void)
{
	std::cout << "I love to get extra bacon for my burger" << std::endl;
}

void Harl::info(void)
{
	std::cout << "It's not enough bacon, You didn't put enough bacon"
		<< std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think you should put free bacon for me, I deserve it"
		<< std::endl;
}
void Harl::error(void)
{
	std::cout << "Call the manager now!!! You didn't solve my problem."
		<< std::endl;
}
void Harl::complain(std::string level)
{
	void (Harl:: *complaints[])(void) =
	{
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	std::string levels[]=
	{
		"debug", "info", "warning" , "error"
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*complaints[i])();
			break;
		}
	}
}
