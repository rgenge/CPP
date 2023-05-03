/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:48:21 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/21 19:07:04 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	this->name = "Default";
	this->grade = 150;
}
Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
	this->name = name;
	this->grade = grade;
	if(this->grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (this->grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	std::cout << this->name << " Bureaucrat constructor called with grade "
	<< this->grade << std::endl;
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}
Bureaucrat::Bureaucrat(Bureaucrat const &cpy)
{
	*this = cpy;
}
Bureaucrat const &Bureaucrat::operator=(Bureaucrat const &cpy)
{
	this->name = cpy.name;
	this->grade = cpy.grade;
	return(*this);
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high it cannot be less than 1";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low it cannot be more than 150";
}
void Bureaucrat::Increment()
{
	if(this->grade <= 1)
		throw (Bureaucrat::GradeTooHighException());
	else
	{
		this->grade--;
		std::cout << this->name << " grade increased to " << this->grade
		<< std::endl;
	}
}
void Bureaucrat::Decrement()
{
	if(this->grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		this->grade++;
		std::cout << this->name << " grade decreased to " << this->grade
		<< std::endl;
	}
}
std::string const &Bureaucrat::getName() const
{
	return (this->name);
}
int const &Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream &operator<<(std::ostream &str, Bureaucrat const &who)
{
	return (str << who.getName() << " bureaucrat grade " << who.getGrade());
}

void Bureaucrat::signForm (Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName();
	}
	catch(std::exception& e)
	{
		std::cout << this->getName()  <<" couldnt't sign " << form.getName()
		<< " because " << e.what() << std::endl;
	}

}
