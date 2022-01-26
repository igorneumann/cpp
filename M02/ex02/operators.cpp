/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:48:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/26 20:10:23 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed & Fixed::operator = (const Fixed &fixed1)
{
	if (this != &fixed)
	{
		std::cout << "Assignation operator called" << std::endl;
		this->fpi = fixed.getRawBits();
	}
	return (*this);
}

int & Fixed::operator > (const Fixed &fixed1, const Fixed &fixed2)
{
	int i;
	i = (fixed1.getRawBits() > fixed2.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator < (const Fixed &fixed1, const Fixed &fixed2)
{
	int i;
	i = (fixed1.getRawBits() < fixed2.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator >= (const Fixed &fixed1, const Fixed &fixed2)
{
	int i;
	i = (fixed1.getRawBits() >= fixed2.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator <= (const Fixed &fixed1, const Fixed &fixed2)
{
	int i;
	i = (fixed1.getRawBits() <= fixed2.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator == (const Fixed &fixed1, const Fixed &fixed2)
{
	int i;
	i = (fixed1.getRawBits() == fixed2.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator != (const Fixed &fixed1, const Fixed &fixed2)
{
	int i;
	i = (fixed1.getRawBits() != fixed2.getRawBits()) ? 1 : 0;
	return (i);
}

Fixed & Fixed::operator + (const Fixed &fixed1, const Fixed &fixed2)
{
	if (this != &fixed1 && this != &fixed2)
	{
		this->fpi = (fixed1.getRawBits() + fixed2.getRawBits());
	}
	return (*this);
}

Fixed & Fixed::operator - (const Fixed &fixed1, const Fixed &fixed2)
{
	if (this != &fixed1 && this != &fixed2)
	{
		this->fpi = (fixed1.getRawBits() - fixed2.getRawBits());
	}
	return (*this);
}

Fixed & Fixed::operator * (const Fixed &fixed1, const Fixed &fixed2)
{
	if (this != &fixed1 && this != &fixed2)
	{
		this->fpi = (fixed1.getRawBits() * fixed2.getRawBits());
	}
	return (*this);
}

Fixed & Fixed::operator / (const Fixed &fixed1, const Fixed &fixed2)
{
	if (this != &fixed1 && this != &fixed2)
	{
		this->fpi = (fixed1.getRawBits() / fixed2.getRawBits());
	}
	return (*this);
}