/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:38:24 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 13:48:51 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

class AForm;

class Intern
{
	AForm *Form[3];
	public:
		Intern();
		~Intern();
		Intern(const Intern &obj);
		Intern & operator=(const Intern &obj);
		AForm	*makeForm(std::string AFormName, std::string target);
};