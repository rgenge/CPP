/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:31:23 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/02 22:57:07 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (void) : ClapTrap()
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	this->name = "None";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::~FragTrap (void)
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}
FragTrap:: FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << this->name << "FragTrap Constructor Called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}
FragTrap::FragTrap (FragTrap const &cpy) : ClapTrap (cpy)
{
	std::cout << this->name << "FragTrap Copy Constructor Called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}
void FragTrap::highFivesGuys(void)
{
	if (this->hit_points <= 0)
		std::cout << this->name << "died and can't high five" << std::endl;
	else
		std::cout << "High Five Guys!" << std::endl;
}
