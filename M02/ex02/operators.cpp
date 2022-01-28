/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:48:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/28 19:57:33 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed & Fixed::operator = (const Fixed &fixed)
{
	if (this != &fixed)
	{
//		std::cout << "Assignation operator called" << std::endl;
		this->fpi = fixed.getRawBits();
	}
	return (*this);
}

bool Fixed::operator > (Fixed const &fixed) const
{
	bool i;
//	std::cout << "> operator called" << std::endl;
	i = (this->getRawBits() > fixed.getRawBits()) ? 1 : 0;
	return (i);
}

bool Fixed::operator < (Fixed const &fixed) const
{
	int i;
//	std::cout << "< operator called" << std::endl;
	i = (this->getRawBits() < fixed.getRawBits()) ? 1 : 0;
	return (i);
}

bool Fixed::operator >= (const Fixed &fixed)
{
	bool i;
//	std::cout << ">= operator called" << std::endl;
	i = (this->getRawBits() >= fixed.getRawBits()) ? 1 : 0;
	return (i);
}

bool Fixed::operator <= (const Fixed &fixed)
{
	bool i;
//	std::cout << "<= operator called" << std::endl;
	i = (this->getRawBits() <= fixed.getRawBits()) ? 1 : 0;
	return (i);
}

bool Fixed::operator == (const Fixed &fixed)
{
	bool i;
//	std::cout << "== operator called" << std::endl;
	i = (this->getRawBits() == fixed.getRawBits()) ? 1 : 0;
	return (i);
}

Fixed & Fixed::operator ++ ()
{
//	std::cout << "++ operator called" << std::endl;
	this->fpi++;
	return *this;
}

Fixed Fixed::operator ++ (int)
{
//	std::cout << "post++ operator called" << std::endl;
	Fixed temp(*this);
	temp.fpi++;
	return (temp);
}

Fixed & Fixed::operator -- ()
{
//	std::cout << "-- operator called" << std::endl;
	this->fpi--;
	return *this;
}

Fixed Fixed::operator -- (int)
{
//	std::cout << "post-- operator called" << std::endl;
	Fixed temp(*this);
	temp.fpi--;
	return (temp);
}

bool Fixed::operator != (const Fixed &fixed)
{
//	std::cout << "!= operator called" << std::endl;
	return (this->getRawBits() != fixed.getRawBits() ? 1 : 0);
}

Fixed Fixed::operator + (const Fixed &fixed)
{
//	std::cout << "+ operator called" << std::endl;
	Fixed temp;
	temp.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (temp);
}

Fixed Fixed::operator - (const Fixed &fixed)
{
//	std::cout << "- operator called" << std::endl;
	Fixed temp;
	temp.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (temp);
}

Fixed Fixed::operator * (const Fixed &fixed)
{
//	std::cout << "* operator called" << std::endl;
	Fixed temp;
	temp.setRawBits((int64_t)this->getRawBits() * (int64_t)fixed.getRawBits() / (1 << 8));
	return (temp);
}

Fixed Fixed::operator / (const Fixed &fixed)
{
//	std::cout << "/ operator called" << std::endl;
	Fixed temp;
	temp.setRawBits((int64_t)this->getRawBits() / (int64_t)fixed.getRawBits() * (1 << 8));
	return (temp);
}