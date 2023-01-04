/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:24:41 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/30 18:36:22 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "------------------test1---------------------------------\n";
	{
		ScavTrap	rakibe("rakibe");
		ScavTrap	miski("miski");
		rakibe.attack("miski");
		miski.takeDamage(1);
		rakibe.beRepaired(20);
		rakibe.guardGate();
	}
	std::cout << "------------------test2---------------------------------\n";
	{
		ScavTrap	rakibe("rakibe");
		ScavTrap	miski("miski");
		rakibe.beRepaired(20);
		miski.beRepaired(20);
		rakibe.guardGate();
	}
}