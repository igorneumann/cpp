/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:42:45 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/14 18:30:07 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string.h>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
		
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) 
{ 
	o << rhs.get(); return o; 
}

template < typename T >
	void func1(T x)
	{
		std::cout << "int is:" << x << std::endl;
	}


template < typename T >
	void func2(T x)
	{
		std::cout << "char is:" << x << std::endl;
	}

template < typename T >
	void func3(T x)
	{
		std::cout << "int is NOT:" << x + 1 << std::endl;
	}

template < typename T >
	void iter(T *a, int l, void (*f)(const T &))
	{
		for (int pos = 0; pos < l ; pos++)
			f(a[pos]);
	}

template < typename T >
	void print( T const & x ) 
	{
		std::cout << x << std::endl; 
		return; 
	}

#endif