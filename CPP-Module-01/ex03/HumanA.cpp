/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:03:20 by amrakibe          #+#    #+#             */
/*   Updated: 2022/11/01 12:42:26 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA(){
};

void HumanA::attack()
{
    std::cout << this->name << ": attacks with their " << weapon.getType() <<std::endl;
}
