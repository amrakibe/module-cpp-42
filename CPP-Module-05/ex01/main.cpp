/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:38:08 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/05 00:19:33 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form F("contra", 21, 11);
		Bureaucrat B("amine", 11);
		B.signForm(F);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form F1( "war9a", 19, 10);
		Bureaucrat b2("lm9adem2", 20);
		b2.signForm(F1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}