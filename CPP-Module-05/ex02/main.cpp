/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:05:19 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 14:28:00 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
		std::cout << "-------------------- test 1: is working --------------------"<< std::endl;
		{	try
			{
				Bureaucrat B("amine", 145);
				ShrubberyCreationForm H(B.getName());
				B.signForm(H);
				H.execute(B);
			}
			catch (const std::exception& msg)
			{
				std::cerr << msg.what() << std::endl;
			}
		}
		std::cout << "\n-------------------- test 2  --------------------"<< std::endl;
		{
			try
			{
				Bureaucrat B("amine", 146);
				ShrubberyCreationForm H(B.getName());
				B.signForm(H);
				H.execute(B);
			}
			catch (const std::exception& msg)
			{
				std::cerr << msg.what() << std::endl;
			}
		}
		std::cout << "\n-------------------- test RobotomyRequestForm --------------------" << std::endl;
		{
			try
			{
				Bureaucrat B("amine", 45);
				RobotomyRequestForm R(B.getName());
				B.signForm(R);
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
				Bureaucrat B("amine", 24);
				PresidentialPardonForm P(B.getName());
				B.signForm(P);
				P.execute(B);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
}
