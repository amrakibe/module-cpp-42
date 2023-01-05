/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 03:09:51 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/05 15:12:10 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base base;

	Base *p = generate();
	std::cout << "Pointeur : ";
	identify(p);
	std::cout << "Reference : ";
		identify(*p);
	delete p;
	return 0;
}
