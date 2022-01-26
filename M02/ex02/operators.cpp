/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:48:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/26 20:23:17 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed & Fixed::operator = (const Fixed &fixed)
{
	if (this != &fixed)
	{
		std::cout << "Assignation operator called" << std::endl;
		this->fpi = fixed.getRawBits();
	}
	return (*this);
}

int & Fixed::operator > (const Fixed &fixed)
{
	int i;
	i = (this->getRawBits() > fixed.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator < (const Fixed &fixed)
{
	int i;
	i = (this->getRawBits() < fixed.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator >= (const Fixed &fixed)
{
	int i;
	i = (this->getRawBits() >= fixed.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator <= (const Fixed &fixed)
{
	int i;
	i = (this->getRawBits() <= fixed.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator == (const Fixed &fixed)
{
	int i;
	i = (this->getRawBits() == fixed.getRawBits()) ? 1 : 0;
	return (i);
}

int & Fixed::operator != (const Fixed &fixed)
{
	int i;
	i = (this->getRawBits() != fixed.getRawBits()) ? 1 : 0;
	return (i);
}

Fixed & Fixed::operator + (const Fixed &fixed)
{
	this->fpi = (this->getRawBits() + fixed.getRawBits());
	return (*this);
}

Fixed & Fixed::operator - (const Fixed &fixed)
{
	this->fpi = (this->getRawBits() - fixed.getRawBits());
	return (*this);
}

Fixed & Fixed::operator * (const Fixed &fixed)
{
	this->fpi = (this->getRawBits() * fixed.getRawBits());
	return (*this);
}

Fixed & Fixed::operator / (const Fixed &fixed)
{
	this->fpi = (this->getRawBits() / fixed.getRawBits());
	return (*this);
}