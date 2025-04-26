/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:41:23 by descamil          #+#    #+#             */
/*   Updated: 2025/04/26 19:03:46 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed(const float &number)
{
	_fixedPointValue = roundf(number * (1 << _fractional));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int &number)
{
	_fixedPointValue = number << _fractional;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	_fixedPointValue = copy._fixedPointValue;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
	{
		std::cout << "Copy assignment operator called" << std::endl;
		_fixedPointValue = copy._fixedPointValue;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}
