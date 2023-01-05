/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:05:19 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 14:25:55 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int main()
{
	std::cout << "-------------test 1 : is working -------------------" << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------test 2 : does not work-------------------" << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Shrubbery CreationForm", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
