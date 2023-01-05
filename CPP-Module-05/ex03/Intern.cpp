/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:38:19 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 14:23:04 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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

AForm *Intern::makeForm(std::string AFormName, std::string target)
{
	std::string AF[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i <= 2; i++)
	{
		if (AFormName == AF[i])
		{
			switch (i)
			{
				case 0:
					std::cout << "form  create: " << AF[0] << std::endl;
					return new ShrubberyCreationForm(target);
				case 1:
					std::cout << "form  create: "<< AF[1] << std::endl;
					return new RobotomyRequestForm(target);
				case 2:
					std::cout << "form  create: " << AF[2] << std::endl;
					return new PresidentialPardonForm(target);
			}
		}
	}
	throw std::out_of_range("error create The Form");
	return(NULL);
}

