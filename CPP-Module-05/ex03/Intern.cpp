/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:38:19 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 02:25:15 by amrakibe         ###   ########.fr       */
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
	if (this != &obj)
		return (*this);
	return (*this);
}

Form *Intern::makeForm(std::string AFormName, std::string target)
{
    Intern Intern;
    std::string AFormName[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    while(i++ < 3 && AFormName[i] != AFormName)
    switch(i)
    {
        case 0:
            std::cout << "Intern creates" << std::endl;
            return (Intern.ShrubberyCreationForm(target));
            break;
        case 1:
            std::cout << "Intern creates" << std::endl;
            return (Intern.RobotomyRequestForm(target));
            break;
        case 2:
            std::cout << "Intern creates" << std::endl;
            return (Intern.PresidentialPardonForm(target));
            break;
        default:
            std::cout << "!Exist" << std::endl;
    }
    return NULL;
};

const char *Intern::Execute::what() const throw()
{
	return "error create The Form.";
}
