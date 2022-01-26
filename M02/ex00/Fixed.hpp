/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:20:32 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/24 20:43:29 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <stdlib.h>
#include <string>

class Fixed
{
	public:
	Fixed();
	Fixed (const Fixed &fixed);
	~Fixed();
	Fixed & operator = (const Fixed &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw ); 

	private:
	int	fpi;
	static const int bit;
};

#endif