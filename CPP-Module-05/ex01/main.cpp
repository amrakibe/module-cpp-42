/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:38:08 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/03 23:26:20 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form a("contra", 21, 110);
		Bureaucrat b("amine", 20);
		b.signForm(a);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form a2( "war9a", 19, 110);
		Bureaucrat b2("lm9adem2", 20);
		b2.signForm(a2);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}