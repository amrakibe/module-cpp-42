/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:42:41 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/30 15:57:03 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "------------------test1-----------------------------------\n";
	{	
		ClapTrap youssef("youssef");
		ClapTrap atef("atef");
		youssef.attack("atef");
		atef.takeDamage(20);
		atef.beRepaired(15);
	}
	std::cout << "------------------test2------------------------------------\n";
	{	
		ClapTrap ayoub("ayoub");
		ClapTrap miski("miski");
		ayoub.attack("meski");
		miski.takeDamage(5);
		ayoub.beRepaired(5);
	}
	std::cout << "------------------test3------------------------------------\n";;
	{	
		ClapTrap youssef("youssef");
		ClapTrap atef("atef");
		atef.beRepaired(5);
		youssef.beRepaired(5);
	}
}