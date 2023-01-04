/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:25:28 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/02 21:26:08 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
    Fixed::value = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

int Fixed::getRawBits()const {
	std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

Fixed::Fixed(Fixed const &obj) {
	std::cout << "Copy constructor called" << std::endl;
   	*this = obj;
}

Fixed &Fixed::operator= (const Fixed &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		value = obj.getRawBits();
	return (*this);
}