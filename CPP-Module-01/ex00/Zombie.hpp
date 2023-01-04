/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:59:34 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/30 17:38:53 by amrakibe         ###   ########.fr       */
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
    	Zombie(std::string name);
		~Zombie();
    	void		announce(void);
};
Zombie*	newZombie( std::string name);
void	randomChump(std::string name);
