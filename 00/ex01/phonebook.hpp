/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:54:59 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/09 16:23:20 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <iomanip>
#define FIRST 0
#define LAST 1
#define NICK 2
#define PHONE 3
#define SECRET 4

class PhoneBook {
private:
	Contact	contacts[8];
	int 	size;
	int 	index;
public:
	PhoneBook(void);
	~PhoneBook(void);
	int 	get_size(void) const;
	void	add_contact(std::string data[5]);
	void	print_contact(int i) const;
	void	print_phonebook(void) const;
};

