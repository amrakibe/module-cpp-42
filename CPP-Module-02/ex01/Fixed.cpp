/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:57:04 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/29 19:38:51 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value  = 0;
};

Fixed::Fixed(Fixed const &obj) {
	std::cout << "Copy constructor called" << std::endl;
		*this = obj;
}

Fixed & Fixed::operator = (const Fixed &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->value = obj.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

int Fixed::getRawBits(void) const {
	return this->value;
}

Fixed::Fixed(const int number) {
	std::cout << "Int constructor called" << std::endl;
	this->value = (number << this->bits);
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor called" << std::endl;
	this->value = (roundf(number * (1 << this->bits)));
}

int	Fixed::toInt(void) const {
	return (this->value >> this->bits);
}

float	Fixed::toFloat(void)const {
	return ((float)this->value / (1 << this->bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}
