/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:38:12 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/20 22:32:25 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const name;
		bool isSigned;
		int const signGrade;
		int const execGrade;
	public:
		Form();
		Form(Form const &cpy);
		Form(std::string const &name, int const &signGrade, int const &execGrade);
		~Form();
		Form const &operator=(const Form &cpy);
		int const &getSignGrade() const;
		int const &getExecGrade() const;
		std::string const &getName() const;
		bool const &getIsSigned() const;
		void beSigned(const Bureaucrat &B);
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &str, Form const &who);

#endif
