/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:54:59 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/09 15:51:07 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string name;
		std::string lastname;
		std::string nickname;
		std::string secret;
		std::string phone;
	public:
		Contact();
		~Contact();
		void setName(std::string name);
		void setLastName(std::string lastname);
		void setNickName(std::string nickname);
		void setSecret(std::string secret);
		void setPhone(std::string phone);
		const std::string& getName(void) const;
		const std::string& getLastName(void) const;
		const std::string& getNickName(void) const;
		const std::string& getSecret(void) const;
		const std::string& getPhone(void) const;

};
#endif
