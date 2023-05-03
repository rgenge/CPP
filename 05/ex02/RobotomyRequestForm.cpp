/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:57:38 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/21 07:01:22 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",
72, 45) ,target("Default")
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
AForm("RobotomyRequestForm", 72, 45) , target(target)
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy):
AForm(cpy)
{
	*this = cpy;
}
std::string const &RobotomyRequestForm::getTarget() const
{
	return(this->target);
}
RobotomyRequestForm const &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	this->target = cpy.target;
	return (*this);
}
const char* RobotomyRequestForm::GradeTooLowException::what()const throw()
{
	return	"Grade is too low";
}
const char* RobotomyRequestForm::NotSignedException::what()const throw()
{
	return	"Form not signed";
}
void RobotomyRequestForm::execute(const Bureaucrat &B)
{
	if (B.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else if (this->getIsSigned() == 0)
	{
		std::cout << this->getIsSigned() << " " << this->getSignGrade() << std::endl;
		throw NotSignedException();
	}
	srand(time(0));
	std::cout <<  "* Unbearable drilling noises *" << std::endl;
	if ((rand() % 2) == 1)
	{
		std::cout << this->target <<" has been robotomized." <<std::endl;
	}
	else
		std::cout << this->target <<" robotomization failed" <<std::endl;
}

