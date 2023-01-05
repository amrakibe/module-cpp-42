/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:36:32 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 13:33:31 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm::PresidentialPardonForm() : AForm(25, 5, "PresidentialPardonForm") 
{
	this->target = "target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(25, 5, "PresidentialPardonForm") 
{
	if(!target.empty())
		this->target = "target";
	else
		throw TargetCanNotBeEmptyException();
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
	{
		this->target = obj.target;
	}
	return (*this);
}

void	PresidentialPardonForm::setTarget(std::string target)
{
	this->target = target;
}

std::string PresidentialPardonForm::getTarget()const
{
	return this->target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(!PresidentialPardonForm::getSign() || executor.getGrade() > PresidentialPardonForm::getGradesignt())
		throw GradeTooHighException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const char *PresidentialPardonForm::TargetCanNotBeEmptyException::what() const throw()
{
	return "target can not be empty.";
}
