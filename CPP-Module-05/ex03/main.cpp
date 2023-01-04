/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:05:19 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 01:52:57 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
		std::cout << "-------------------- test ShrubberyCreationForm --------------------"<< std::endl;
		{
			std::cout << "-------------------- test 1 --------------------"<< std::endl;
			{	try
				{
					Bureaucrat B("aminef", 145);
					AForm *AF = new ShrubberyCreationForm(B.getName());
					B.executeForm(*AF);
					delete AF;
				}
				catch (const std::exception& msg)
				{
					std::cerr << msg.what() << std::endl;
				}
			}
			std::cout << "\n-------------------- test 2 --------------------"<< std::endl;
			{
				try
				{
					Bureaucrat B("amine", 146);
					AForm *AF = new ShrubberyCreationForm(B.getName());
					B.executeForm(*AF);
					delete AF;
				}
				catch (const std::exception& msg)
				{
					std::cerr << msg.what() << std::endl;
				}
			}
		}
		std::cout << "\n-------------------- test RobotomyRequestForm --------------------" << std::endl;
		{
			try
			{
				Bureaucrat B("sa", 72);
				RobotomyRequestForm R("amine");
				R.execute(B);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		std::cout << "\n-------------------- test PresidentialPardonForm --------------------" << std::endl;
		{
			try
			{
				Bureaucrat B("file", 136);
				PresidentialPardonForm P("aa");
				P.execute(B);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
}
