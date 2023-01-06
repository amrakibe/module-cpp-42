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
			array = new T[n];
			this->size_ = n;
			for (size_t i = 0; i < n; i++)
			{
				this->array[i] = 0;
			}
		}
		Array(const Array &obj)
		{
			*this = obj;

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
			if (index >= this->size_)
				throw std::out_of_range("error: index out of range");
			return(this->array[index]);
		}
		const T &operator[](unsigned int index) const
		{
			if (index >= this->size_)
				throw std::out_of_range("error: index out of range");
			return(this->array[index]);
		}
		~Array()
		{
			if(array != NULL)
				delete[] array;
		};

};