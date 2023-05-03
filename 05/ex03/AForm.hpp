/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:38:12 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/20 15:49:17 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const name;
		bool isSigned;
		int const signGrade;
		int const execGrade;
	public:
		AForm();
		AForm(AForm const &cpy);
		AForm(std::string const &name, int const &signGrade, int const &execGrade);
		virtual ~AForm();
		AForm const &operator=(const AForm &cpy);
		int const &getSignGrade() const;
		int const &getExecGrade() const;
		std::string const &getName() const;
		bool const &getIsSigned() const;
		void beSigned(const Bureaucrat &B);
		virtual void execute (const Bureaucrat &executor) = 0;
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &str, AForm const &who);

#endif
