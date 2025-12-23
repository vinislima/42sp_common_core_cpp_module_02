/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 21:53:14 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/22 22:07:50 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
