/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:26:38 by descamil          #+#    #+#             */
/*   Updated: 2025/05/07 12:49:00 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

# include "include.hpp"

class Fixed
{
	private:
		static const int	_fractional = 8;
		int					_fixedPointValue;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		Fixed(const float &number);
		Fixed(const int &number);

		float toFloat( void ) const;
		int toInt( void ) const;


		bool operator>(const Fixed &copy);
		bool operator<(const Fixed &copy);
		bool operator>=(const Fixed &copy);
		bool operator<=(const Fixed &copy);
		bool operator==(const Fixed &copy);
		bool operator!=(const Fixed &copy);

		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		Fixed& operator++();
		Fixed& operator--();

		Fixed operator++(int);
		Fixed operator--(int);
	
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed);

#endif
