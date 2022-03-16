/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:25:13 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/16 19:54:10 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"


MutantStack::MutantStack() : std::stack<T>() {};

MutantStack::MutantStack( int *arr ) : value(*arr), size(sizeof(&arr)/sizeof(arr[0])) { }

MutantStack & MutantStack::operator = (const MutantStack &MutantStack)
{
	std::stack<T>::operator=(src);
    return *this;
}

MutantStack::MutantStack(const MutantStack &src) : std::stack<T>(src)
{
	if (this != &src)
        *this = src;
}

MutantStack::~MutantStack( void ) { }

MutantStack::begin(void) 
{
	return this->c.begin();
}

MutantStack::iterator	end(void) 
{
	return this->c.end();
}