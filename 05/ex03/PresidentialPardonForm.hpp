/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:38:12 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/20 22:32:25 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm();
		PresidentialPardonForm const &operator=(const PresidentialPardonForm &cpy);
		std::string const &getTarget() const;
		void execute(const Bureaucrat &executor);
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class NotSignedException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif
