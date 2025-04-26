/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:41:10 by descamil          #+#    #+#             */
/*   Updated: 2025/04/26 18:22:04 by descamil         ###   ########.fr       */
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
		Fixed(const float &number);
		Fixed(const int &number);
		~Fixed();
		Fixed(const Fixed &copy);
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed &operator=(const Fixed &copy);
};

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed);
	
#endif
