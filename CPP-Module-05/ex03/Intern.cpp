/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:38:19 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 02:57:08 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){
}

Intern::~Intern(){
}

Intern::Intern(const Intern &obj)
{
	*this = obj;
}

Intern & Intern::operator=(const Intern &obj)
{
	for (size_t i = 0; i < 2; i++)
	{
		this->Form[i] = obj.Form[i];
	}
	return (*this);
}

// Form *Intern::makeForm(std::string nameForm, std::string target)
// {
// 	std::string FormObj[3] = {
// 		"ShrubberyCreationForm",
// 		"RobotomyRequestForm",
// 		"PresidentialPardonForm"};

// 	// Form *f[3] = {&ShrubberyCreationForm() };

// 		int i = -1;
// 	while (++i < 3)
// 	{
// 		if (nameForm == FormObj[i])
// 		{
// 			switch (i)
// 			{
// 			case 0:
// 				printMessage(FormObj[i]);
// 				return new ShrubberyCreationForm(target);

// 			case 1:
// 				printMessage(FormObj[i]);
// 				return new RobotomyRequestForm(target);
// 			case 2:
// 				printMessage(FormObj[i]);
// 				return new PresidentialPardonForm(target);
// 			}
// 		}
// 	}

// 	throw Intern::NotExist();
// 	return NULL;
// }

Form Intern::makeForm(std::string AFormName, std::string target)
{
	std::string AF[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};
	for (int i = 0; i <= 2; i++)
	{
		if (AFormName == AF[i])
		{
			switch (i)
			{
				case 0:
					return (new ShrubberyCreationForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new PresidentialPardonForm(target));
				break;
			}
		}
	}
	throw Intern::Execute();
}

const char *Intern::Execute::what() const throw()
{
	return "error create The Form.";
}
