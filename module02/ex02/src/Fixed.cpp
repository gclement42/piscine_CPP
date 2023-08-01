/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:07:36 by gclement          #+#    #+#             */
/*   Updated: 2023/08/01 13:04:25 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value)
{
	//std::cout << "Int constructor called" << std::endl;
	_value = value * (1 << _fractionalBits);
}

Fixed::Fixed(const float value)
{
	//std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _fractionalBits));
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed &Fixed::min(Fixed &Value1, Fixed &Value2)
{
	if (Value1.getRawBits() > Value2.getRawBits())
		return (Value2);
	return (Value1);
}

const Fixed &Fixed::min(const Fixed &Value1, const Fixed &Value2)
{
	if (Value1.getRawBits() > Value2.getRawBits())
		return (Value2);
	return (Value1);
}

Fixed &Fixed::max(Fixed &Value1, Fixed &Value2)
{
	if (Value1.getRawBits() > Value2.getRawBits())
		return (Value1);
	return (Value2);
}

const Fixed &Fixed::max(const Fixed &Value1, const Fixed &Value2)
{
	if (Value1.getRawBits() > Value2.getRawBits())
		return (Value1);
	return (Value2);
}

Fixed &Fixed::operator=(Fixed const &src)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed &src) const
{
	return (this->_value > src.getRawBits());
} 

bool Fixed::operator<(Fixed &src) const
{
	return (this->_value < src.getRawBits());
}

bool Fixed::operator>=(Fixed &src) const
{
	return (this->_value >= src.getRawBits());
}

bool Fixed::operator<=(Fixed &src) const
{
	return (this->_value <= src.getRawBits());
}

bool Fixed::operator==(Fixed &src) const
{
	return (this->_value == src.getRawBits());
}

bool Fixed::operator!=(Fixed &src) const
{
	return (this->_value != src.getRawBits());
}

Fixed &Fixed::operator+(const Fixed &src)
{
	this->_value += src.getRawBits();
	return (*this);
}

Fixed &Fixed::operator-(const Fixed &src)
{
	this->_value -= src.getRawBits();
	return (*this);
}

Fixed &Fixed::operator*(const Fixed &src)
{
	this->_value *= src.getRawBits();
	this->_value = toInt();
	return (*this);
}

Fixed &Fixed::operator/(const Fixed &src)
{
	this->_value /= src.getRawBits();
	this->_value = toInt();
	return (*this);
}

Fixed &Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

std::ostream &operator<<(std::ostream &out, Fixed const &src)
{
	out << src.toFloat();
	return (out);
}
