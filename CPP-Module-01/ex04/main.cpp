/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:00:54 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/30 16:47:17 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "error: bad arguments" << std::endl;
 		return (0);
	}
	std::string file = av[1]; 
	std::ifstream infile(file);
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string str;
	if(s1 == s2)
	{
		std::cout << "error: fatal" << std::endl;
		return (0);
	}
	if (s1.empty())
	{
		std::cout << "error: to replacce string is empty" << std::endl;
		return (0);
	}
	if(!infile)
	{
		std::cout << "file with this name " << file << " is not exist !" << std::endl;
		return (0);
	}
	size_t i;
	if (std::getline(infile, str, '\0'))
	{
		while((i = str.find(s1)) != std::string::npos)
		{
			str = str.substr(0, i) + s2 + str.substr(i + s1.length(), -1);
		}
	}
	std::ofstream outfile(file + ".replace");
    if(!outfile)
    {
        std::cout << "Failed !" << std::endl;
        return (0);
    }
	outfile << str;
	return (0);
}
