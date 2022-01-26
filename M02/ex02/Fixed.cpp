/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:20:34 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/26 20:24:51 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const float num)
{
	int raw = std::roundf(num * (1 << this->bit));
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(raw);
}

Fixed::Fixed(const int num)
{
	int raw = num << this->bit;
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(raw);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return this->fpi;
}

void Fixed::setRawBits( int const raw )
{
	this->fpi = raw;
}

float Fixed::toFloat( void ) const
{
	float num = ((float)this->fpi) / (1 << this->bit);
	return num;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

int Fixed::toInt( void ) const
{
	int num = this->fpi >> this->bit;
	return num;
}

Fixed Fixed::min (Fixed &fixed1, const Fixed &fixed2)
{
	Fixed answer;
	answer = (fixed1 < fixed2) ? fixed1 : fixed2;
	return answer;
}

Fixed Fixed::max (Fixed &fixed1, const Fixed &fixed2)
{
	Fixed answer;
	answer = (fixed1 > fixed2) ? fixed1 : fixed2;
	return answer;
}