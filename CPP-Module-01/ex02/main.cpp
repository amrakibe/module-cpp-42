/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:04:16 by amrakibe          #+#    #+#             */
/*   Updated: 2022/10/30 17:44:10 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string brinz = "HI THIS IS BRAIN";
    std::string *stringPTR; 
    stringPTR = &brinz;
    std::string &stringREF = brinz;
    
    std::cout << "The memory address of the brinz     : " << &brinz << std::endl;
    std::cout << "The memory address of the stringPTR : " << &stringPTR << std::endl;
    std::cout << "The memory address of the stringREF : "<< &stringREF << std::endl << std::endl;
    
    std::cout << "The value of the string variable    : " << brinz << std::endl;
    std::cout << "The value pointed to by stringPTR   : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF   : "<< stringREF << std::endl;
}