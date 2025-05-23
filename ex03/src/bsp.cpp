/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:21:28 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/30 20:09:01 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsp.hpp"

float	area(Point p1, Point p2, Point p3)
{
	float	part1 = p1.getX() * (p2.getY() - p3.getY());
	float	part2 = p2.getX() * (p3.getY() - p1.getY());
	float	part3 = p3.getX() * (p1.getY() - p2.getY());
	float	total = part1 + part2 + part3;
	return (fabs(total) / 2.0f);
}


bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	originalArea = area(a, b, c);	
	float	pointAreaA = area(point, b, c);	
	float	pointAreaB = area(a, point, c);	
	float	pointAreaC = area(a, b, point);	
	float	pointArea = fabs((pointAreaA + pointAreaB + pointAreaC) - originalArea);

	std::cout << pointArea << std::endl;
	
	return (pointArea < 0.0001);
}

