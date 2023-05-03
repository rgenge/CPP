/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:57:38 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/21 07:01:22 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",
145, 137) ,target("Default")
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
AForm("ShrubberyCreationForm", 145, 137) , target(target)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy):AForm(cpy)
{
	*this = cpy;
}
std::string const &ShrubberyCreationForm::getTarget() const
{
	return(this->target);
}
ShrubberyCreationForm const &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	this->target = cpy.target;
	return (*this);
}
const char* ShrubberyCreationForm::GradeTooLowException::what()const throw()
{
	return	"Grade is too low";
}
const char* ShrubberyCreationForm::NotSignedException::what()const throw()
{
	return	"Form not signed";
}
void ShrubberyCreationForm::execute(const Bureaucrat &B)
{
	if (B.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else if (this->getIsSigned() == 0)
	{
		std::cout << this->getIsSigned() << " " << this->getSignGrade() << std::endl;
		throw NotSignedException();
	}
	std::string name = target + "_shrubbery";
	std::ofstream outfile (name.c_str());
	outfile << "	  XXX " <<std::endl;
	outfile << "     XXXxx "<<std::endl;
	outfile << "   XXXXXXXXX "<<std::endl;
	outfile << "  XXXXXXXXXXX "<<std::endl;
	outfile << "   XXXXXXXXX "<<std::endl;
	outfile << "      XXX "<<std::endl;
	outfile << "      XXX" << std::endl;
	outfile.close();
}

