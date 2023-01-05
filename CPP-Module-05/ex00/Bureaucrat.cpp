/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:03:50 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/05 00:03:31 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat() : name("Bureaucrat")
{
	this->grade = 150;
}

Bureaucrat::~Bureaucrat(){
};

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		this->grade = obj.grade;
	}
	return (*this);
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

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low.");
}

std::ostream & operator<< (std::ostream &out ,const Bureaucrat &obj)
{
	out << obj.getName() << " , bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return (out);
}
