/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:57:38 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/21 07:01:22 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",
25, 5) ,target("Default")
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
AForm("PresidentialPardonForm", 25, 5) , target(target)
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy):AForm(cpy)
{
	*this = cpy;
}
std::string const &PresidentialPardonForm::getTarget() const
{
	return(this->target);
}
PresidentialPardonForm const &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	this->target = cpy.target;
	return (*this);
}
const char* PresidentialPardonForm::GradeTooLowException::what()const throw()
{
	return	"Grade is too low";
}
const char* PresidentialPardonForm::NotSignedException::what()const throw()
{
	return	"Form not signed";
}
void PresidentialPardonForm::execute(const Bureaucrat &B)
{
	if (B.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else if (this->getIsSigned() == 0)
	{
		std::cout << this->getIsSigned() << " " << this->getSignGrade() << std::endl;
		throw NotSignedException();
	}
	std::cout <<  this->target <<" has been pardoned by Zaphod Beeblebrox" << std::endl;
}

