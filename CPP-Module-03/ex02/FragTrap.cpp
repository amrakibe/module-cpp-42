/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:25:57 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/30 17:09:27 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(){
};

FragTrap::FragTrap(std::string name)
{
	this->HitPoint = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	this->name = name;
}

FragTrap::FragTrap()
{
	this->HitPoint = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	this->name = "unknown";
}

FragTrap::FragTrap(const FragTrap &obj)
{
	this->HitPoint = obj.HitPoint;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;
	this->name = obj.name;
}

FragTrap & FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this != &fragtrap)
	{
		this->HitPoint = fragtrap.HitPoint;
		this->EnergyPoints = fragtrap.EnergyPoints;
		this->AttackDamage = fragtrap.AttackDamage;
		this->name = fragtrap.name;
	}
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "HI FIVE GUYS" << std::endl;
}