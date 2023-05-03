/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:54:59 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/25 10:40:20 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
}
Contact::~Contact(void)
{
}
void Contact::setName(std::string name)
{
	this->name = name;
}
void Contact::setLastName(std::string lastname)
{
	this->lastname = lastname;
}
void Contact::setNickName(std::string nickname)
{
	this->nickname = nickname;
}
void Contact::setPhone(std::string phone)
{
	this->phone = phone;
}
void Contact::setSecret(std::string secret)
{
	this->secret = secret;
}
const std::string& Contact::getName() const
{
	return (this->name);
}
const std::string& Contact::getLastName() const
{
	return (this->lastname);
}
const std::string& Contact::getNickName() const
{
	return (this->nickname);
}
const std::string& Contact::getPhone() const
{
	return (this->phone);
}
const std::string& Contact::getSecret() const
{
	return (this->secret);
}
