/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 04:12:16 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/07 23:05:17 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int size_;
	public:
		Array()
		{
			size_ = 0;
			array = new T[size_];
		}
		Array(unsigned int n)
		{
			this->size_ = n;
			array = new T[n];
			for (size_t i = 0; i < size_; i++)
			{
				this->array[i] = 0;
			}
		}
		Array(const Array &obj)
		{
			this->size_ = obj.size_;
			this->array = new T[obj.size_];
			for (size_t i = 0; i < obj.size_; i++)
			{
				this->array[i] = obj.array[i];
			}
		}
		Array &operator=(const Array &obj)
		{
			if(this->array != NULL)
				delete[] this->array;
			this->size_ = obj.size_;
			this->array = new T[obj.size_]; 
			for (size_t i = 0; i < obj.size_; i++)
			{
				this->array[i] = obj.array[i];
			}
			return (*this);
		}
		T &operator[](unsigned int index)
		{
			if (index >= size())
				throw std::out_of_range("Error: Index is out of range");
			return (this->array[index]);
		}
		const T &operator[](unsigned int index) const
		{
			if (index >= size())
				throw std::out_of_range("Error: Index is out of range");
			return (this->array[index]);
		}
		~Array()
		{
			if(array != NULL)
				delete[] array;
		}
		unsigned int size() const
		{
			return (this->size_);
		}
};