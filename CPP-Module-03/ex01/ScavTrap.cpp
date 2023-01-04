/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:25:08 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/30 17:12:02 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->HitPoint = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    this->HitPoint = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    this->name = name;
}

ScavTrap::~ScavTrap(){
};

void ScavTrap::attack(const std::string &target)
{
    if(this->HitPoint > 0 && this->EnergyPoints > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " ,causing "<< this->AttackDamage << " points of damage!" << std::endl;
        this->EnergyPoints--;
    }
    else
    {
        std::cout << "no energy point" << std::endl;
    }
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    *this = scavTrap;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &obj) 
{
    if(this != &obj)
    {
        this->HitPoint = obj.HitPoint;
        this->EnergyPoints = obj.EnergyPoints;
        this->AttackDamage = obj.AttackDamage;
        this->name = obj.name;
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
