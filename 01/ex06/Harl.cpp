/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:20:04 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/03 08:15:09 by acosta-a         ###   ########.fr       */
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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my burger" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "It's not enough bacon, You didn't put enough bacon"
		<< std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think you should put free bacon for me, I deserve it"
		<< std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Call the manager now!!! You didn't solve my problem."
		<< std::endl;
}
void Harl::complain(std::string level)
{
	int	levelnumber;

	levelnumber = -1;
	void (Harl:: *complaints[])(void) =
	{
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	std::string levels[]=
	{
		"debug", "info", "warning" , "error"
	};

	for (int i = 0; i < 4; i++)
		if(levels[i] == level)
			levelnumber = i;
	switch (levelnumber)
	{
		case 0:
			(this->*complaints[0])();
			break;
		case 1:
			(this->*complaints[0])();
			(this->*complaints[1])();
			break;
		case 2:
			(this->*complaints[0])();
			(this->*complaints[1])();
			(this->*complaints[2])();
			break;
		case 3:
			(this->*complaints[0])();
			(this->*complaints[1])();
			(this->*complaints[2])();
			(this->*complaints[3])();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems "
			<< std::endl;
	}
}
