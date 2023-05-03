/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:48:22 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/25 00:45:32 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	Data carla = {"carla", 10};
	uintptr_t serialized;
	Data *descarla;

	serialized = Serializer::serialize(&carla);
	std::cout << "Serialized data number: " << serialized << std::endl;
	descarla= Serializer::deserialize(serialized);
	std::cout << "Deserialized data name: " << descarla->name << std::endl;
	std::cout << "Deserialized data age: " << descarla->age << std::endl;
}
