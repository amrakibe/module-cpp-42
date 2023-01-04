/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:50:44 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/29 17:14:00 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->value  = 0;
};

Fixed::Fixed(Fixed const &obj){
	*this = obj;
};

Fixed & Fixed::operator = (const Fixed &obj) {
	if(this != &obj)
	    this->value = obj.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw){
    this->value = raw;
}

int Fixed::getRawBits(void) const {
    return this->value;
}

Fixed::~Fixed(){
}

Fixed::Fixed(const int number) {
	std::cout <<" sssss\n" ;
	this->value = number << this->bits;
}

Fixed::Fixed(const float number) {
	this->value = (roundf(number * (1 << this->bits))); // 7.8 * 2^8
}

int	Fixed::toInt(void)const {
	return (this->value >> this->bits);
}

float	Fixed::toFloat(void)const { 
	return ((float)this->value / (1 << this->bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj){
   out << obj.toFloat();
    return out;
}

//the comparison operators:
bool Fixed::operator > (const Fixed &obj)
{
    return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator < (const Fixed &obj)
{
     return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator >= (const Fixed &obj)
{
     return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator <= (const Fixed &obj)
{
     return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator == (const Fixed &obj)
{
     return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator != (const Fixed &obj)
{
     return (this->getRawBits() != obj.getRawBits());
}

// The arithmetic operators:
Fixed Fixed::operator*(const Fixed &obj)
{
    return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed &obj)
{
    return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator+(const Fixed &obj)
{
    return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed &obj)
{
    return Fixed(this->toFloat() / obj.toFloat());
}

Fixed &Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++this->value;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->value--;
	return (*this); 
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--this->value;
	return(tmp);
}

const Fixed &Fixed::max(const Fixed &point , const Fixed &point1) 
{
	return (point.getRawBits() > point1.getRawBits() ? point : point1);
}

Fixed &Fixed::max(Fixed &point , Fixed &point1)
{
	return (point.getRawBits() > point1.getRawBits() ? point : point1);
}

const Fixed &Fixed::min(const Fixed &point , const Fixed &point1) 
{
	return (point.getRawBits() < point1.getRawBits() ? point : point1);
}

Fixed &Fixed::min(Fixed &point ,Fixed &point1)
{
	return (point.getRawBits() < point1.getRawBits() ? point : point1);
}
