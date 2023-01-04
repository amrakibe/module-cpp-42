/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:16:11 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/25 17:53:38 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	this->count_contact = 0;
}

std::string get_sub(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9) + ".";
	}
	else
	{
		for (int i = str.length(); i < 10; i++)
		{
			std::cout << " ";
		}
	}
	return (str);
}

void PhoneBook::add_Ncontact()
{
	static int i;
	std::string FirstName, LastName,  NickName,  NumberPhone,  DarkeSecret;

	do{
		std::cout << "Enter The First Name : ";
			if (!std::getline(std::cin, FirstName))
				exit(1);
			if (FirstName.empty())
				std::cout << "\33[0;31mYou Must Be Add First Name\33[0m" << std::endl;
		} 
		while (FirstName.empty());
			contact[i].setFirstName(FirstName);

		do{
			std::cout << "Enter The Last Name : ";
			if (!std::getline(std::cin, LastName))
				exit(1);
			if (LastName.empty())
				std::cout << "\33[0;31mYou Must Be Add Last Name\33[0m" << std::endl;
		} 
		while (LastName.empty());
		contact[i].setLastName(LastName);

		do{
			std::cout << "Enter The Nick Name : ";
			if (!std::getline(std::cin, NickName))
				exit(1);
			if (NickName.empty())
				std::cout << "\33[0;31mYou Must Be Add Nick Name\33[0m" << std::endl;
		} 
		while (NickName.empty());
		contact[i].setNickName(NickName);

		do{
			std::cout << "Enter The NumberPhone : ";
			if (!std::getline(std::cin, NumberPhone))
				exit(1);
			if (NumberPhone.empty())
				std::cout << "\33[0;31mYou Must Be Add NumberPhone\33[0m" << std::endl;
		}
		while (NumberPhone.empty());
		contact[i].setNumberPhone(NumberPhone);

		do{
			std::cout << "Enter The DarkeSecret : ";
			if (!std::getline(std::cin, DarkeSecret))
				exit(1);
			if (DarkeSecret.empty())
				std::cout << "\33[0;31mYou Must Be Add DarkeSecret\33[0m" << std::endl;
		}
		while (DarkeSecret.empty());
		contact[i].setDarkestSecret(DarkeSecret);
	
		if(this->count_contact != 8)
			this->count_contact++;
		i++;
		if (i == 8)
			i = 0;
}

void PhoneBook::getContactId(int id)
{
	if (id < 0 || id >= this->count_contact)
		std::cout << "\033[0;31m[error: Your ID is out of range !!]\033[0;0m" << std::endl;
	else
	{
		std::cout << "this is first name   : " << this->contact[id].getFirstName() << std::endl;
		std::cout << "this is last name    : " << this->contact[id].getLastName() << std::endl;
		std::cout << "this is nick name    : " << this->contact[id].getNickName() << std::endl;
		std::cout << "this is number Phone : " << this->contact[id].getNumberPhone() << std::endl;
		std::cout << "this is dark secret  : " << this->contact[id].getDarkestSecret() << std::endl;
	}
}

void PhoneBook::searchContact()
{
	if (this->count_contact == 0)
	{
		std::cout << "\033[0;31mNot Contact Found ! \033[0;0m" << std::endl;
			return;
	}
	std::cout << "____________________________________________" << std::endl;
	std::cout << "|id        |firstname |lastname  |nickname  |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < this->count_contact; i++)
	{
		std::cout << "|         "<<  i << "|";
		std::cout << get_sub(this->contact[i].getFirstName()) << "|";
		std::cout << get_sub(this->contact[i].getLastName()) << "|";
		std::cout << get_sub(this->contact[i].getNickName()) << "|" << std::endl;
	}
	std::cout << "|__________|__________|__________|__________|"<< std::endl;
	std::cout << "\033[0;32mentre your id:\033[0;0m ";
	std::string id;
	std::getline(std::cin, id);
	if (id.empty())
		return ;
	if (!has_onlydigit(id))
		std::cout << "\033[0;31m[error: Your ID is Not Correct !!]\033[0;0m" << std::endl;
	else
		this->getContactId(stoi(id));
}
