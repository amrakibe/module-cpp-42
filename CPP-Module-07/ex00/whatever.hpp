/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:47:49 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/06 18:47:52 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void swap(T &f, T &s)
{
	T tmp = f;
	f = s;
	s = tmp;
}

template <typename T>
T min(T &f, T &s)
{
	return (f < s ? f : s);
}

template <typename T>
T max(T &f, T &s)
{
	return (f > s ? f : s);
}
