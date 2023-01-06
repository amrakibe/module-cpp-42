/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:47:59 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/06 21:42:24 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void Print(const T &element)
{
	std::cout << element << std::endl;
}

int main()
{
	int array[4] = {0,1,2,3};
	std::cout << "array to int: " << std::endl;
	::iter(array, 4, Print);

	std::string arr[4] = {"rakibe", "leet", "amine", "sbrk"};
	std::cout << "array of string: " << std::endl;
	::iter(arr, 4, Print);

	int array[4] = {0,1,2,3};
	std::cout << "array to int: ";
	::iter(array, 4, Print);
	return (0);
}