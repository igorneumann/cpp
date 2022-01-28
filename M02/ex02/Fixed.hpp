/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:20:32 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/28 18:40:55 by ineumann         ###   ########.fr       */
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
	Fixed (const Fixed &cp);
	Fixed (const int num);
	Fixed (const float num);
	~Fixed();
	Fixed & operator = (const Fixed &fixed);
	bool operator > (Fixed const &fixed) const;
	bool operator < (Fixed const &fixed) const;
	bool operator >= (const Fixed &fixed);
	bool operator <= (const Fixed &fixed);
	bool operator == (const Fixed &fixed);
	bool operator != (const Fixed &fixed);
	Fixed & operator ++ (); //pre increment
	Fixed operator ++ (int); //post increment
	Fixed & operator -- (); //pre decrement
	Fixed operator -- (int); //post decrement
	Fixed operator + (const Fixed &fixed);
	Fixed operator - (const Fixed &fixed);
	Fixed operator * (const Fixed &fixed);
	Fixed operator / (const Fixed &fixed);
	friend std::ostream &operator<<(std::ostream &out, const Fixed &value);
	int getRawBits( void ) const;
	void setRawBits( int const raw ); 
	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed &min (Fixed &fixed1, Fixed &fixed2);
	static Fixed &max (Fixed &fixed1, Fixed &fixed2);
	static const Fixed &min (Fixed const &fixed1, Fixed const &fixed2);
	static const Fixed &max (Fixed const &fixed1, Fixed const &fixed2);

	private:
	int	fpi;
	static const int bit;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);
Fixed &min (Fixed &fixed1, Fixed &fixed2);
Fixed &max (Fixed &fixed1, Fixed &fixed2);

#endif