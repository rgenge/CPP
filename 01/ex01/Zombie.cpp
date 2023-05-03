/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:16:43 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/19 11:49:29 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "No name Zombie" << " : Constructor called" << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << this->name << " : Destructor called" << std::endl;
}
Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << " : Constructor called" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(std::string name)
{
	this->name = name;
}
