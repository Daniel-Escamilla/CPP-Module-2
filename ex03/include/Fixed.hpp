/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:19:05 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/05/07 12:49:31 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "../bsp.hpp"

class Fixed
{
	private:
		static const int	_fractional = 8;
		int					_fixedPointValue;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed				&operator=(const Fixed &copy);

		Fixed(const float &number);
		Fixed(const int &number);

		int					toInt( void ) const;
		float				toFloat( void ) const;

		bool				operator<(const Fixed &copy);
		bool				operator>(const Fixed &copy);

		bool				operator>=(const Fixed &copy);
		bool				operator<=(const Fixed &copy);
		bool				operator==(const Fixed &copy);
		bool				operator!=(const Fixed &copy);

		Fixed				operator+(const Fixed &other) const;
		Fixed				operator-(const Fixed &other) const;
		Fixed				operator*(const Fixed &other) const;
		Fixed				operator/(const Fixed &other) const;

		Fixed				&operator++();
		Fixed				&operator--();

		Fixed				operator++(int);
		Fixed				operator--(int);
	
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

};

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed);

#endif
