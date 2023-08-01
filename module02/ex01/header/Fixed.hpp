/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:24:32 by gclement          #+#    #+#             */
/*   Updated: 2023/08/01 13:01:20 by gclement         ###   ########.fr       */
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
		Fixed &operator=(const Fixed &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void ) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &src);

#endif