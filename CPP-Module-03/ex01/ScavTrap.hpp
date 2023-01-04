/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:24:54 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/30 13:24:56 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
    	ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap&operator=(const ScavTrap & obj);
        ScavTrap();
        ~ScavTrap();
		void attack(const std::string&target);
        void guardGate();
};
