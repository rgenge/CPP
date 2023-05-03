/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:57:38 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/20 22:48:22 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default"), signGrade(1), execGrade(1)
{
	std::cout << "Default constructor called" << std::endl;
}
AForm::AForm(std::string const &name, int const &signGrade, int const &execGrade):
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
AForm::~AForm()
{
	std::cout << this->name << " Destructor called" << std::endl;
}
AForm::AForm(AForm const &cpy) : name(cpy.name), signGrade(cpy.signGrade),
execGrade(cpy.execGrade)
{
	*this = cpy;
}
int const &AForm::getExecGrade() const
{
	return (this->execGrade);
}
int const &AForm::getSignGrade() const
{
	return(this->signGrade);
}
std::string const &AForm::getName() const
{
	return(this->name);
}
bool const &AForm::getIsSigned() const
{
	return(this->isSigned);
}
AForm const &AForm::operator=(const AForm &cpy)
{
	this->isSigned = cpy.isSigned;
	return (*this);
}
void AForm::beSigned(const Bureaucrat &B)
{
	if (B.getGrade() > this->signGrade)
		throw AForm::GradeTooLowException();
	else
	{
		this->isSigned = true;
	}
}
const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}
const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &str, AForm const &AForm)
{
	return (str << AForm.getName() << ": signed " << AForm.getIsSigned()
	<< " signGrade :" << AForm.getSignGrade() << " execGrade: " <<
	AForm.getExecGrade());
}
