/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:34:18 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/30 21:20:28 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl Harl;
	if(ac != 2)
	{
		std::cout << "bad arguments : you must be add: DEBUG or INFO or WARNING or ERROR" << std::endl;
		return (0);
	}
	Harl.complain(av[1]);
}
