/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:26:15 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/30 18:33:54 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	amrakibe("amine");
	FragTrap	fragtrap;

	amrakibe.attack("kiwalo");
	amrakibe.beRepaired(100);
	amrakibe.takeDamage(123);
	fragtrap.attack("atef");
	fragtrap.highFivesGuys();
}