/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/02 22:24:43 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (void) : ClapTrap()
{
	std::cout <<"ScavTrap Default constructor called" << std::endl;
	this->name = "None";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->gate_mode = false;
}
ScavTrap::ScavTrap (std::string const &name) : ClapTrap(name)
{
	std::cout << name << " ScavTrap constructor called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->gate_mode = false;
}
ScavTrap::~ScavTrap (void)
{
	std::cout <<"ScavTrap Destructor called" << std::endl;
}
ScavTrap::ScavTrap (ScavTrap const &cpy) : ClapTrap(cpy)
{
	std::cout <<"Copy constructor called" << std::endl;
	*this = cpy;
}
ScavTrap &ScavTrap::operator=(ScavTrap const &cpy)
{
	std::cout <<"Copy assignment operator called" << std::endl;
	this->name = cpy.name;
	this->hit_points = cpy.hit_points;
	this->energy_points = cpy.energy_points;
	this->attack_damage= cpy.attack_damage;
	return(*this);
}
void ScavTrap::guardGate()
{
	if (this->hit_points <= 0)
		std::cout << "ScavTrap " << this->name << "is dead and can't enter Gate Mode" << std::endl;
	else
	{
		this->gate_mode = true;
		std::cout << "ScavTrap " << this->name << " entered Gate Mode"
			<< std::endl;
	}
}
void  ScavTrap::attack(const std::string & target)
{
	if (this->energy_points <= 0)
	{
		std::cout << "ScavTrap " << this->name << " doest not have enough energy." << std::endl;
		std::cout << "Low Energy:" << this->energy_points << std::endl;
	}
	else
	{
		this->energy_points--;
		std::cout << "ScavTrap " << this->name << " attacks " << target <<
			" causing " << this->attack_damage << " points of damage." << std::endl;
		std::cout << "Energy after attack:" << this->energy_points << std::endl;
	}
}
