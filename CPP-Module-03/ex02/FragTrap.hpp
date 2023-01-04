/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:26:04 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/30 15:58:37 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{    
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &fragtrap);
		FragTrap&operator=(const FragTrap &fragtrap);
		FragTrap(std::string name);
		void highFivesGuys(void);
};