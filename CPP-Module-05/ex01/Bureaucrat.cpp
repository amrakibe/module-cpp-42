/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:03:35 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 00:07:32 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if(grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

void	Bureaucrat::decrement()
{
    if (this->grade == 150)
    {
        throw	Bureaucrat::GradeTooLowException();
    }
    this->grade++;
}

void	Bureaucrat::increment()
{
	if (this->grade == 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade--;
}

Bureaucrat::Bureaucrat() : name("Bureaucrat")
{
	this->grade = 150;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	std::cout << "Copy constructor Called" << std::endl;
	*this = obj;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->grade = obj.grade;
	}
	return (*this);
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& msg)
	{
		std::cerr << msg.what() << '\n';
		std::cout << this->getName() << " couldn't sign "<< form.getName() << " because " << msg.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low.");
}

std::ostream & operator<< (std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << " , bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return (out);
}
