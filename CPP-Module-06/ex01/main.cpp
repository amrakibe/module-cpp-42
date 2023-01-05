/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 03:09:14 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/05 16:49:15 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data t;
	Data n;
	Data *P;
	
	n.age = 250;
	n.size =75;
	t.age = 250;
	t.size = 75;

	uintptr_t ptr = serialize(&t);
	std::cout << "decimal address  :  " << ptr << std::endl;
	std::cout << "data address     :  " << &t << std::endl;
	std::cout << "data address     :  " << &n << std::endl;
	P = deserialize(ptr);
	std::cout << "desr              :  " << P << std::endl;
	std::cout << "value age is      : " << P->age << std::endl;
	std::cout << "value size is     : " << P->size << std::endl;

	&t ==  P ?std::cout << "true" : std::cout << "false"; 
	return (0);
}
