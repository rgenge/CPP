/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:27:06 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/04 23:51:50 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &cpy);
		Animal &operator=(const Animal &cpy);
		virtual ~Animal();
		virtual void makeSound(void) const = 0;
		virtual std::string getType(void) const;
		virtual Brain &getBrain(void) const = 0;
};

#endif
