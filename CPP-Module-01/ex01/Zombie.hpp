/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:43:27 by amrakibe          #+#    #+#             */
/*   Updated: 2022/11/01 12:19:43 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
		Zombie();
		~Zombie();
        void setName(std::string name);
		Zombie(std::string name);
        void	announce();
};
Zombie*	zombieHorde(int N, std::string name);