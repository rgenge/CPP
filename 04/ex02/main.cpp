/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:27:22 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/04 23:52:37 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

int main()
{
//	Animal* animal = new Animal();
	std::cout <<"-----Brain-----" << std::endl;

	Animal* dog = new Dog();
	Animal* cat = new Cat();
	Brain	*brain;
	brain = &cat->getBrain();
	brain->saveIdea("test", 1);
	std::cout << brain->printIdea(1) << std::endl;
	std::cout << cat->getBrain().printIdea(1) << std::endl;
	brain = &dog->getBrain();
	brain->saveIdea("test2", 2);
	brain->saveIdea("test10", 99);
	std::cout << dog->getBrain().printIdea(2) << std::endl;
	std::cout << dog->getBrain().printIdea(99) << std::endl;
	delete dog;
	delete cat;

	std::cout <<"-----Brain Copy-----" << std::endl;
	Cat* src = new Cat();

	brain = &src->getBrain();
	brain->saveIdea("cpy test", 1);
	Cat* cpy = new Cat(*src);
	std::cout <<"-----src test-----" << std::endl;
	std::cout << src->getBrain().printIdea(1) << std::endl;
	std::cout <<"-----cpy test2-----" << std::endl;
	delete src;
	std::cout << cpy->getBrain().printIdea(1) << std::endl;
	delete cpy;

	std::cout <<"-----Brain = assignment-----" << std::endl;
	Cat *assign = new Cat();
	Cat *assign_copy = new Cat();
	Brain	*brain2;
	brain2 = &assign->getBrain();
	brain2->saveIdea("assign test", 1);
	*assign_copy = *assign;
	delete assign;
	std::cout << assign_copy->getBrain().printIdea(1) << std::endl;
	delete assign_copy;
	return 0;
}
