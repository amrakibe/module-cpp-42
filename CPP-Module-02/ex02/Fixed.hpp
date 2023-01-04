/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:16:44 by amrakibe          #+#    #+#             */
/*   Updated: 2022/12/29 16:21:56 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_
#define _FIXED_

#include <cmath>
#include <iostream>
class Fixed {
      private:
	  	int value;
		static const int bits = 8;
      public:
		Fixed();
		Fixed(const int n1);
		Fixed(const float n2);
		Fixed(Fixed const &obj);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &obj);
		bool operator>(const Fixed &obj);
		bool operator<(const Fixed &obj);
		bool operator>=(const Fixed &obj);
		bool operator<=(const Fixed &obj);
		bool operator==(const Fixed &obj);
		bool operator!=(const Fixed &obj);
		Fixed operator*(const Fixed &obj);
		Fixed operator-(const Fixed &obj);
		Fixed operator+(const Fixed &obj);
		Fixed operator/(const Fixed &obj);
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed const &min(const Fixed &point , const Fixed &point1);
		static Fixed &min(Fixed &point ,Fixed &point1);
		static  Fixed const &max(const Fixed &point ,const Fixed &point1);
		static Fixed &max(Fixed &point ,Fixed &point1);
};
std::ostream &operator<<(std::ostream &out, const Fixed &obj);
#endif