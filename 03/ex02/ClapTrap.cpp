/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/02 20:12:01 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void)
{
	std::cout <<"ClapTrap default constructor called" << std::endl;
	this->name = "None";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}
ClapTrap::ClapTrap (std::string const &name)
{
	std::cout << name << " ClapTrap constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}
ClapTrap::~ClapTrap (void)
{
	std::cout <<"ClapTrap Destructor called" << std::endl;
}
ClapTrap::ClapTrap (ClapTrap const &cpy)
{
	std::cout <<"ClapTrap Copy constructor called" << std::endl;
	*this = cpy;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &cpy)
{
	std::cout <<"Copy assignment operator called" << std::endl;
	this->name = cpy.name;
	this->hit_points = cpy.hit_points;
	this->energy_points = cpy.energy_points;
	this->attack_damage= cpy.attack_damage;
	return(*this);
}
void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " doest not have enough energy." << std::endl;
		std::cout << "Low Energy:" << this->energy_points << std::endl;
	}
	else
	{
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks " << target <<
			" causing " << this->attack_damage << " points of damage." << std::endl;
		std::cout << "Energy after attack:" << this->energy_points << std::endl;
	}
}
void ClapTrap:: takeDamage(unsigned int amount)
{
	if (amount > this->hit_points)
	{
		this->hit_points = 0;
		std::cout << this->name << " died" << std:: endl;
	}

	else
	{
		this->hit_points -= amount;
		std::cout << this->name << " got " << amount << " damage! " << 	std:: endl;
		std::cout << "Hitpoints after being damaged: " << this->hit_points << std::endl;
	}
}
void ClapTrap:: beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0)
		std::cout << this->name <<" died, cant repair\n";
	else
	{

		this->hit_points += amount;
		std::cout  << this->name << " got " << amount <<
			" repair points." << std::endl;
		std::cout << "Hitpoints after repair: " << this->hit_points <<
			std::endl;
	}
}
