/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:13:44 by amrakibe          #+#    #+#             */
/*   Updated: 2022/11/01 13:25:01 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}
void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " :Destroy successfully" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}
