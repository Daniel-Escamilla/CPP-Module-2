/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:26:00 by descamil          #+#    #+#             */
/*   Updated: 2025/04/26 20:25:13 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(10);
	Fixed d(2);
	Fixed e(42.42f);
	Fixed f(e);

	std::cout << "\n--- Basic operations ---\n";
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;

	std::cout << "\n--- Comparison operators ---\n";
	std::cout << "(c > d): " << (c > d) << std::endl;
	std::cout << "(c < d): " << (c < d) << std::endl;
	std::cout << "(c >= d): " << (c >= d) << std::endl;
	std::cout << "(c <= d): " << (c <= d) << std::endl;
	std::cout << "(c == d): " << (c == d) << std::endl;
	std::cout << "(c != d): " << (c != d) << std::endl;

	std::cout << "\n--- Arithmetic operators ---\n";
	std::cout << "(c + d): " << (c + d) << std::endl;
	std::cout << "(c - d): " << (c - d) << std::endl;
	std::cout << "(c * d): " << (c * d) << std::endl;
	std::cout << "(c / d): " << (c / d) << std::endl;

	std::cout << "\n--- Increment/Decrement operators ---\n";
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "\n--- Min / Max functions ---\n";
	std::cout << "Min(c, d): " << Fixed::min(c, d) << std::endl;
	std::cout << "Max(c, d): " << Fixed::max(c, d) << std::endl;
	std::cout << "Min(e, f): " << Fixed::min(e, f) << std::endl;
	std::cout << "Max(e, f): " << Fixed::max(e, f) << std::endl;

	std::cout << "\n--- toFloat() and toInt() ---\n";
	std::cout << "e as float: " << e.toFloat() << std::endl;
	std::cout << "e as int: " << e.toInt() << std::endl;

	std::cout << "\n--- Assignment operator ---\n";
	Fixed g;
	std::cout << "g before assignment: " << g << std::endl;
	g = c;
	std::cout << "g after assignment: " << g << std::endl;

	return 0;
}
