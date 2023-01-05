/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 03:09:09 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/05 13:58:52 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

struct Data
{
	int age;
	int size;
};

uintptr_t	serialize(Data *ptr);
Data	*deserialize(uintptr_t raw);
