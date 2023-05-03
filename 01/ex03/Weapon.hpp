/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:54:01 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/20 15:03:14 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		const std::string& getType(void);
		void setType(std::string type);
};

#endif
