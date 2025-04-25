/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:04:36 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/25 12:13:30 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef fixed_HPP
# define fixed_HPP

# include "include.hpp"

class Fixed
{
	private:
		static const int	_fractional = 8;
		int					_fixed;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		
		int			getRawBits() const;
		void		setRawBits(int const raw);
		static int	getFractional() { return (_fractional); }
		
		
};

#endif
