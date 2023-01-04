
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:55:22 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/28 12:03:20 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << std::endl << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << std::endl <<"[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << std::endl << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << std::endl << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int is_valid(std::string arr[], std::string level)
{
	return (arr[0] != level && arr[1] != level && arr[2] != level && arr[3] != level);
}

void Harl::complain(std::string level)
{
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*function[4])();
	if(is_valid(arr, level))
	{
		std::cout << "[ " << level << " ]" << std::endl << "is not found" << std::endl;
		return ;
	}
	function[0] = &Harl::debug;
	function[1] = &Harl::info;
	function[2] = &Harl::warning;
	function[3] = &Harl::error;
	for(int i = 0; i <= 3; i++)
	{
		if(!level.compare(arr[i]))
		{
			(this->*function[i])();
			break ;
		}
	}
}
