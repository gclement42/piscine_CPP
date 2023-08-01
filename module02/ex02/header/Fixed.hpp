/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:06:48 by gclement          #+#    #+#             */
/*   Updated: 2023/08/01 13:02:33 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed				&operator=(const Fixed &src);
		bool				operator>(Fixed &src) const;
		bool				operator<(Fixed &src) const;
		bool				operator>=(Fixed &src) const;
		bool				operator<=(Fixed &src) const;
		bool				operator==(Fixed &src) const;
		bool				operator!=(Fixed &src) const;
		Fixed				&operator+(const Fixed &src);
		Fixed				&operator-(const Fixed &src);
		Fixed				&operator*(const Fixed &src);
		Fixed				&operator/(const Fixed &src);
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void ) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &value1, Fixed &value2);
		static const Fixed	&min(Fixed const &value1, Fixed const &value2);
		static Fixed		&max(Fixed &value1, Fixed &value2);
		static const Fixed	&max(Fixed const &value1, Fixed const &value2);
};

std::ostream &operator<<(std::ostream &out, Fixed const &src);

#endif