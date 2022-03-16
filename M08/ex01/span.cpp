/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:37:09 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/16 19:02:28 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( int sz ) : size(sz), filled(0)
{
}

Span::Span(const Span &Span)
{
	if (this != &Span)
	{
		// std::cout << "Copy constructor called" << std::endl;
		this->setSize(Span.size);
        this->setFilled(Span.filled);
        for (int i = 0; i < size; i++)
            value[i] = Span.value[i];
	}
}

Span & Span::operator = (const Span &Span)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->setSize(Span.size);
    this->setFilled(Span.filled);
    for (int i = 0; i < size; i++)
        value[i] = Span.value[i];
	return (*this);
}

Span::~Span( void )
{
}

int Span::getSize( void )
{
	return (size);
}

void Span::setSize( int sz )
{
    size = sz;
}

int Span::getFilled( void )
{
	return (filled);
}

void Span::setFilled( int fl )
{
    filled = fl;
}

void Span::addFilled( void )
{
    filled++;
}

int Span::getValue( int index )
{
	return (value[index]);
}

void Span::setValue ( int vl, int index )
{
    if (index <= size)
	    value[index] = vl;
    // else if (index == size)
    // {
    //     size++;
    //     this->value[index] = vl;
    // }
}

void Span::addNumber( int vl )
{
	if (filled == size)
		throw Span::VectorFilled();
    value.push_back(vl);
    filled++;
}

void Span::print()
{
    for (int i = 0; i < filled; i++)
        std::cout << "Value " << i << "is: " << value[i] << std::endl;
}

int Span::shortestSpan( void )
{
    int st = -1;

    if (filled < 2)
		throw Span::Notenough((int)filled);
    else for (int i = 0; i < filled; i++)
        for (int j = 0; j < filled; j++)
        {
            if (j != i)
                {
                    // print();
                    if (value[j] > value[i] && ((value[j] - value[i]) < st || st == -1))
                        st = (value[j] - value[i]);
                    else if (value[i] > value[j] && ((value[i] - value[j]) < st || st == -1))
                        st = (value[i] - value[j]);
                    else if (value[i] == value[j])
                        st = 0;
                }
        }
    return st;
}

int Span::longestSpan( void )
{
    int st = -1;

    if (filled < 2)
		throw Span::Notenough((int)filled);
    else for (int i = 0; i < filled; i++)
        for (int j = 0; j < filled; j++)
        {
            if (j != i)
                {
                    if (value[i] == value[j])
                        st = 0;
                    else if (value[j] > value[i] && (value[j] - value[i]) > st)
                        st = (value[j] - value[i]);
                    else if (value[i] > value[j] && (value[i] - value[j]) > st)
                        st = (value[i] - value[j]);
                }
        }
    return st;
}