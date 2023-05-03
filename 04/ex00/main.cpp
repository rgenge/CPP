/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:27:22 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/04 23:24:11 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout <<"-----Init test-----" << std::endl;
	const Animal* anim = new Animal();
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout <<"-----Sound test-----" << std::endl;
	anim->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout <<"-----Copy test-----" << std::endl;
	Dog copy_dog(*dog);
	copy_dog.makeSound();
	copy_dog = *dog;
	copy_dog.makeSound();
	delete anim;
	delete dog;
	delete cat;
	std::cout <<"-----Wrong-----" << std::endl;
	const WrongAnimal* wAnimal= new WrongAnimal();
	const WrongAnimal* wCat = new WrongCat();
	wAnimal->makeSound();
	wCat->makeSound();
	delete wAnimal;
	delete wCat;
	return 0;
}
