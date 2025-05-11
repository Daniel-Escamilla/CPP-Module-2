/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:20:15 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/05/11 19:27:21 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "../bsp.hpp"

class Point
{
	private:
		Fixed	x;
		Fixed	y;
	public:
		Point() : x(0), y(0) {};
		Point(const float x, const float y);
		Point(const Point &other);
		~Point() {};
		Point	&operator=(const Point &other);
		
		float	getX() { return (x.toFloat()); };
		float	getY() { return (y.toFloat()); };
};
	
float	area(Point p1, Point p2, Point p3);
bool	bsp(Point a, Point b, Point c, Point point);

#endif
