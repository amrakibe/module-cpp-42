/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:55:01 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/29 22:21:09 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->Type = "";
}

Weapon::Weapon(std::string type)
{
	this->Type = type;
}

Weapon::~Weapon(){};

void	Weapon::setType(std::string Type)
{
	this->Type = Type;
}

std::string	Weapon::getType()
{
	return this->Type;
}
