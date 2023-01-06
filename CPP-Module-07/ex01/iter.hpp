/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:48:19 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/06 21:36:39 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void iter(T *array, size_t len, void (*f)(const T  &element))
{
	size_t i = 0;
	while(i < len)
		f(array[i++]);
}