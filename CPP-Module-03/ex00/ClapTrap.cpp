/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:19:13 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/12 17:27:57 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
 
ClapTrap::~ClapTrap()
{
    std::cout << std::endl << "Destructor   :" << std::endl;
    std::cout << "name         : " << this->name << std::endl;
    std::cout << "HitPoint     : " << this->HitPoint << std::endl;
    std::cout << "EnergyPoints : " << this->EnergyPoints << std::endl;
    std::cout << "AttackDamage : " << this->AttackDamage << std::endl;
};

ClapTrap::ClapTrap()
{
    this->HitPoint = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    this->name = "unknown";
}

ClapTrap::ClapTrap(std::string name)
{
    this->HitPoint = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &claptrap) 
{
    if (this != &claptrap)
    {
        this->HitPoint = claptrap.HitPoint;
        this->EnergyPoints = claptrap.EnergyPoints;
        this->AttackDamage = claptrap.AttackDamage;
        this->name = claptrap.name;
    }
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (this->HitPoint > 0 && this->EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " ,causing "<< this->AttackDamage << " points of damage!" << std::endl;
        this->EnergyPoints--;
    }
    else
    {
        std::cout << "no energy point" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->HitPoint > 0 && this->EnergyPoints > 0)
    {
        this->HitPoint += amount;
        this->EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " repair " << amount << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoint > 0)
    {
	    std::cout << "ClapTrap " << this->name << " lost " << amount << std::endl;
	    if(amount > this->HitPoint)
		    this->HitPoint = 0;
	    else
	    {
		    this->HitPoint -= amount;
	    }
	}
    else
        std::cout << "ClapTrap There is no HitPoint" << std::endl;
}
