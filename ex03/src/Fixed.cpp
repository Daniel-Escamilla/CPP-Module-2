/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:21:53 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/30 19:54:29 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsp.hpp"

Fixed::Fixed()
{
	_fixedPointValue = 0;
}

Fixed::Fixed(const float &number)
{
	_fixedPointValue = roundf(number * (1 << _fractional));
}

Fixed::Fixed(const int &number)
{
	_fixedPointValue = number << _fractional;
}

Fixed::Fixed(const Fixed &copy)
{
	_fixedPointValue = copy._fixedPointValue;
}

Fixed::~Fixed()
{

}

float Fixed::toFloat( void ) const
{
	return ((float)_fixedPointValue / (1 << _fractional));
}

int Fixed::toInt( void ) const
{
	return (_fixedPointValue >> _fractional);
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		_fixedPointValue = copy._fixedPointValue;
	return (*this);
}

bool Fixed::operator>(const Fixed &other)
{
	return (_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed &other)
{
	return (_fixedPointValue < other._fixedPointValue);
}

bool Fixed::operator>=(const Fixed &other)
{
	return (_fixedPointValue >= other._fixedPointValue);
}

bool Fixed::operator<=(const Fixed &other)
{
	return (_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator==(const Fixed &other)
{
	return (_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(const Fixed &other)
{
	return (_fixedPointValue != other._fixedPointValue);
}
Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
	this->_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_fixedPointValue++;
	return temp;
}


Fixed& Fixed::operator--()
{
	this->_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_fixedPointValue--;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (&a < &b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (&a < &b)
		return (b);
	return (a);
}

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}
