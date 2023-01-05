/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 03:09:46 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/05 05:45:52 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Base
{
    public:
		virtual ~Base(){};
};

class A: public Base
{
	public:
		~A(){};
};

class B: public Base
{
	public:
		~B(){};
};

class C :public Base
{
	public:
		~C(){};
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);