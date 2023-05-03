/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:53:58 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/20 15:02:59 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (void)
{
}
Weapon::Weapon (std::string type) :type(type)
{
}
Weapon::~Weapon (void)
{
}
const std::string& Weapon::getType(void)
{
	return (this->type);
}
void Weapon::setType(std::string type)
{
	this->type = type;
}

