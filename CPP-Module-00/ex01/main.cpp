/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:45:56 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/23 19:30:26 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int PhoneBook::has_onlydigit(std::string str)
{
	for (int i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return(0);
	return (1);
}

int main()
{
	Contact contact;
	PhoneBook phone;
	std::string input;
	std::string firstName;

	while (TRUE)
	{
		std::cout << "➜ ";
		if (!std::getline(std::cin, input))
			break;
		if (input.compare("ADD") && input.compare("EXIT") && input.compare("SEARCH"))
		{
			std::cout << "\033[0;32m•••••••••••••••••••••••••••••••••••••••••••••••••••\033[0;0m" << std::endl;
			std::cout << "\033[0;32m•\033[0;31m                INVALID COMMAND !!!!       \033[0;32m      •" << std::endl;
			std::cout << "\033[0;32m•                                                 •  \033[0;0m " << std::endl;
			std::cout << "\033[0;32m•••••••••••••••• > INSTRUCTIONS < •••••••••••••••••" << std::endl;
			std::cout << "•                                                 •  " << std::endl;
			std::cout << "•••••• > ENTER ONE OF THESE COMMANDS BELOW < ••••••" << std::endl;
			std::cout << "•          [ ADD : Save a New Contact ]           •" << std::endl;
			std::cout << "•     [ SEARCH : Display a Specific Contact ]     •" << std::endl;
			std::cout << "•         [ EXIT : Leaving The Program ]          •" << std::endl;
			std::cout << "•••••••••••••••••••••••••••••••••••••••••••••••••••\033[0;0m" << std::endl;
		}
		if (!input.compare("ADD"))
		{
			phone.add_Ncontact();	
		}
		if (!input.compare("SEARCH"))
		{
			phone.searchContact();
		}
		if (!input.compare("EXIT"))
		{
			exit(0);
		}
	}
	return (0);
}
