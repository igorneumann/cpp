/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:20:32 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/24 17:39:45 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

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
	float toFloat( void ) const;
	int toInt( void ) const;

	private:
	int	fpi;
	static const int bit;
};

#endif