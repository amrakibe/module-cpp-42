/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:42:30 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/30 12:35:19 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
    private:
        std::string name;
		unsigned	int HitPoint;
		unsigned	int EnergyPoints;
		unsigned	int AttackDamage;
    public:
        ClapTrap();
        ~ClapTrap();
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap&operator=(const ClapTrap &claptrap);
		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
