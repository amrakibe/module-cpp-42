/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:23:46 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/23 23:44:35 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int ac, char **av)
{
	int i = -1;
	int j = 1;
	std::string arr;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
	else
	{
		while(j < ac)
		{
			while(av[1][++i])
			{
				arr = std::toupper(av[1][i]);
				std::cout << arr;
			}
			j++;
		}
		std::cout << std::endl;
	}
}
