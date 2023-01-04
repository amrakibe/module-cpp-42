/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:22:06 by amrakibe          #+#    #+#             */
/*   Updated: 2022/11/01 13:24:55 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int i = 0;
	int n = 2;
	Zombie *zombie = zombieHorde(n, "zombies");
	while(i < n)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return (0);
}