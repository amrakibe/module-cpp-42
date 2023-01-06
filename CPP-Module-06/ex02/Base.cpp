/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 03:09:28 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/06 13:10:43 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	Base *base;
	srand(time(0));
	int random = rand() % 3;
	switch (random)
	{
	case (0):
		base = new A;
		break;
	case (1):
		base = new B;
		break;
	case (2):
		base = new C;
		break;
	}
	return base;
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a)
	{
        std::cout << "type is A" << std::endl;
		return ;
	}
	if (b)
	{
		std::cout << "type is B" << std::endl;
		return ;
	}
	if (c)
	{
		std::cout << "type is C" << std::endl;
		return ;
	}
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout<< &a << ": TYPE IS A" <<std::endl;
	}
	catch(const std::exception& msg)
	{
		(void)msg;
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout<<&b << ": TYPE IS B" <<std::endl;
	}
	catch(const std::exception& msg)
	{
		(void)msg;
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout  << &c << ": TYPE IS C" <<std::endl;
	}
	catch(const std::exception& msg)
	{
		(void)msg;
	}
}
