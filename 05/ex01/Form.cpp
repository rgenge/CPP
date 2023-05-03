/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:57:38 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/20 22:48:22 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), signGrade(1), execGrade(1)
{
	std::cout << "Default constructor called" << std::endl;
}
Form::Form(std::string const &name, int const &signGrade, int const &execGrade):
name(name), signGrade(signGrade), execGrade(execGrade)
{
	if (execGrade < 1 || signGrade < 1)
		throw (GradeTooHighException());
	else if (execGrade > 150 || signGrade > 150)
		throw (GradeTooLowException());
	std::cout << this->name << " constructor called with " << this->signGrade
	<<" of signGrade and execGrade of " << this->execGrade << std::endl;
	this->isSigned = false;
}
Form::~Form()
{
	std::cout << this->name << " Destructor called" << std::endl;
}
Form::Form(Form const &cpy) : name(cpy.name), signGrade(cpy.signGrade),
execGrade(cpy.execGrade)
{
	*this = cpy;
}
int const &Form::getExecGrade() const
{
	return (this->execGrade);
}
int const &Form::getSignGrade() const
{
	return(this->signGrade);
}
std::string const &Form::getName() const
{
	return(this->name);
}
bool const &Form::getIsSigned() const
{
	return(this->isSigned);
}
Form const &Form::operator=(const Form &cpy)
{
	this->isSigned = cpy.isSigned;
	return (*this);
}
void Form::beSigned(const Bureaucrat &B)
{
	if (B.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	else
	{
		this->isSigned = 1;
		std::cout << B.getName() << " signed" << std::endl;
	}
}
const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &str, Form const &form)
{
	return (str << form.getName() << ": signed " << form.getIsSigned()
	<< " signGrade :" << form.getSignGrade() << " execGrade: " <<
	form.getExecGrade());
}
