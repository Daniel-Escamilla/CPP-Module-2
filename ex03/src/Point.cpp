/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:22:10 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/28 20:41:24 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/include.hpp"

Point::Point(const float ValueX, const float ValueY)
	: x(ValueX), y(ValueY)
{
	
}

Point::Point(const Point &other)
	: x(other.x), y(other.y)
{
	
}

Point	&Point::operator=(const Point &other)
{
	this->x = other.x;
	this->y = other.y;
	return (*this);
}
