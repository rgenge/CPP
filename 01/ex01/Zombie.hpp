/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:20:04 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/19 11:43:37 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string name);
		void announce(void);
		void set_name(std::string name);
		~Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
