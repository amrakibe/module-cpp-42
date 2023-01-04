/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:16:09 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/23 19:30:33 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#define TRUE 1

class PhoneBook
{
	private:
		Contact contact[8];
		int		count_contact;

	public:
		PhoneBook();
		void	addedContact(std::string FirstName, std::string LastName, std::string NickName, std::string NumberPhone, std::string DarkeSecret);
		void	add_Ncontact();
		int		has_onlydigit(std::string str);
		void	searchContact();
		void	getContactId(int id);
};

#endif