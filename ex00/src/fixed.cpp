/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:04:23 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/25 12:35:29 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fixed.hpp"

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed);
}

void	Fixed::setRawBits(const int value)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixed = value;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		_fixed = copy.getRawBits();
	}
	return (*this);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
    _fixed = copy.getRawBits();
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}