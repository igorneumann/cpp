/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:20:32 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/26 20:23:18 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <cfenv>
#include <string>

class Fixed
{
	public:
	Fixed();
	Fixed (const Fixed &fixed);
	Fixed (const int num);
	Fixed (const float num);
	~Fixed();
	Fixed & operator = (const Fixed &fixed);
	int & operator > (const Fixed &fixed);
	int & operator < (const Fixed &fixed);
	int & operator >= (const Fixed &fixed);
	int & operator <= (const Fixed &fixed);
	int & operator == (const Fixed &fixed);
	int & operator != (const Fixed &fixed);
	Fixed & operator + (const Fixed &fixed);
	Fixed & operator - (const Fixed &fixed);
	Fixed & operator * (const Fixed &fixed);
	Fixed & operator / (const Fixed &fixed);
	friend std::ostream &operator<<(std::ostream &out, const Fixed &value);
	int getRawBits( void ) const;
	void setRawBits( int const raw ); 
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed min (const Fixed &fixed1, const Fixed &fixed2);
	Fixed max (const Fixed &fixed1, const Fixed &fixed2);

	private:
	int	fpi;
	static const int bit;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif