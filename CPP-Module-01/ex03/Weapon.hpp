/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:47:27 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/26 22:14:42 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Weapon
{
    private:
		std::string Type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		void	setType(std::string Type);
		std::string getType();
};