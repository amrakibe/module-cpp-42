/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:16:00 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/23 18:01:40 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
    private:
	    std::string LastName;
	    std::string FirstName;
	    std::string NickName;
	    std::string Numberphone;
	    std::string DarkestSecret;
    public:
        Contact();
        Contact(std::string FirstName, std::string LastName, std::string NickName, std::string NumberPhone, std::string DarkeSecret);
        void setLastName(std::string LastName);
        void setFirstName(std::string FirstName);
        void setNickName(std::string NickName);
        void setNumberPhone(std::string Numberphone);
        void setDarkestSecret(std::string DarkestSecret);
        std::string getLastName();
        std::string getFirstName();
        std::string getNickName();
        std::string getNumberPhone();
        std::string getDarkestSecret();
};

#endif