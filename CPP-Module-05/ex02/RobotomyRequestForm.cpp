/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:36:40 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/05 00:23:14 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm(){
};

RobotomyRequestForm::RobotomyRequestForm()
{
	this->target = "target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(72, 45,"RobotomyRequestForm")
{
	if (!target.empty())
		this->target = target;
	else
		throw TargetCanNotBeEmptyException();
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): AForm(72, 45, "RobotomyRequestForm")
{
	*this = obj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
		this->target = obj.target;
	return (*this);
}

void RobotomyRequestForm::setTraget(std::string target)
{
	this->target = target;
}
std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}

const char *RobotomyRequestForm::TargetCanNotBeEmptyException::what() const throw()
{
	return "target can not be empty.";
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	
if (!RobotomyRequestForm::getSign() || (executor.getGrade() > RobotomyRequestForm::getGradesignt()))
		throw GradeTooLowException();
	srand(time(0));
	int x = (rand() % 2);
	if(x == 1)
		std::cout << this->getTarget() << " has been robotmized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " robotomized Failed" << std::endl;
}