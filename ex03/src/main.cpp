/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:22:00 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/28 20:49:56 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsp.hpp"
#include "../include/Point.hpp"

int main()
{
	Point	a(1,0);
	Point	b(0,0);
	Point	c(1,1);
	Point	m(0.5, 0.5);
	Point	n(4, 4);

	bool	status;

	status = bsp(a, b, c, m);
	std::cout << status << std::endl;

	status = bsp(a, b, c, n);
	std::cout << status << std::endl;

	return (0);
}
