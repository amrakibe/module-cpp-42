/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:24:29 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/30 13:24:31 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
		unsigned	int HitPoint;
		unsigned	int EnergyPoints;
		unsigned	int AttackDamage;
    public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &t);
		ClapTrap&operator=(const ClapTrap &obj);
        ClapTrap();
        ~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
