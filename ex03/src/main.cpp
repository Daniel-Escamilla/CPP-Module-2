/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:22:00 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/08/19 18:46:03 by descamil         ###   ########.fr       */
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
	Point	n(1.01, 0);

	bool	status;

	status = bsp(a, b, c, m);
	std::cout << "Status " << (status ? "true" : "false") << std::endl;

	status = bsp(a, b, c, n);
	std::cout << "Status " << (status ? "true" : "false") << std::endl;

	return (0);
}
