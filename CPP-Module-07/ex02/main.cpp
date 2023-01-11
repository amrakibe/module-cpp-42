/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:40:17 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/07 23:04:51 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
    Array<char> a(2);
    char arr[5] = {'a', 'z', 'x', 'c', 'y'};
    try
    {
        for (int i = 0; i < 5; i++)
            a[i] = arr[i];
        std::cout << "content of the array: ";
        for (int i = 0; i < 5; i++)
        {
            std::cout << a[i] << " ";
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "\n-------------- More Testing -------------------------" << std::endl;
    Array<int> a1(23);
    try
    {
        std::cout << "content of the array: ";
        for (size_t i = 0; i < 115; i++)
        {
            a1[i] = 9;
            std::cout << a1[i] << " ";
        }
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
