/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:15:54 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/24 01:55:29 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->FirstName = "";
	this->LastName = "";
	this->NickName = "";
	this->Numberphone = "";
	this->DarkestSecret = "";
}

Contact::Contact(std::string FirstName, std::string LastName, std::string NickName, std::string NumberPhone, std::string DarkeSecret)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->NickName = NickName;
	this->Numberphone = NumberPhone;
	this->DarkestSecret = DarkeSecret;
}

void Contact::setFirstName(std::string FirstName)
{
	this->FirstName = FirstName;
}
std::string Contact::getFirstName()
{
	return this->FirstName;
}

void Contact::setLastName(std::string LastName)
{
	this->LastName = LastName;
}
std::string Contact::getLastName()
{
	return this->LastName;
}

void Contact::setNickName(std::string NickName)
{
	this->NickName = NickName;
}
std::string Contact::getNickName()
{
	return this->NickName;
}

void Contact::setNumberPhone(std::string NumberPhone)
{
	this->Numberphone = NumberPhone;
}
std::string Contact::getNumberPhone()
{
	return this->Numberphone;
}

void Contact::setDarkestSecret(std::string DarkestSecret)
{
	this->DarkestSecret = DarkestSecret;
}
std::string Contact::getDarkestSecret()
{
	return this->DarkestSecret;
}
