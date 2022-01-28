/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:20:34 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/28 18:54:40 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed()
{
//	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &cp)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Fixed::Fixed(const float num)
{
	int raw = std::roundf(num * (1 << this->bit));
//	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(raw);
}

Fixed::Fixed(const int num)
{
	int raw = num << this->bit;
//	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(raw);
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
//	std::cout << "Getrawbits called" << std::endl;
	return this->fpi;
}

void Fixed::setRawBits( int const raw )
{
//	std::cout << "SetRawBits called" << std::endl;
	this->fpi = raw;
}

float Fixed::toFloat( void ) const
{
	std::cout << "tofloat called for " << this->fpi << std::endl;
	float num = ((float)this->fpi) / (1 << this->bit);
	return num;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
//	std::cout << "<< operator called" << std::endl;
	out << value.toFloat();
	return (out);
}

int Fixed::toInt( void ) const
{
//	std::cout << "tofint called" << std::endl;
	int num = this->fpi >> this->bit;
	return num;
}

Fixed &min (Fixed &fixed1, Fixed &fixed2)
{
//	std::cout << "min called" << std::endl;
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

Fixed &max (Fixed &fixed1, Fixed &fixed2)
{
//	std::cout << "max called" << std::endl;
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
//	std::cout << "fixedmin called" << std::endl;
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
//	std::cout << "fixedmax called" << std::endl;
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

const Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
//	std::cout << "const fixedmin called" << std::endl;
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

const Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
//	std::cout << "const fixedmax called" << std::endl;
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}