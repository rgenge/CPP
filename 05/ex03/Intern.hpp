/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:04:30 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/21 19:01:29 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
private:
	Bureaucrat bureaucrat;
	const std::string formName;
	const std::string formTarget;

public:
	Intern();
	~Intern();
	Intern(const Intern &cpy);
	Intern &operator=(const Intern &cpy);
	AForm *makeForm(const std::string &formName, const std::string &formTarget);
	class InvalidInput : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif
