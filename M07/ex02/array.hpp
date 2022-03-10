/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:27:30 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/10 18:54:16 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class Array {

	public:
		Array();
		Array(int s);
		Array( const Array &Array );
		~Array( void );
		Array & operator = ( const Array &Array );
		T & operator [] ( int index );
		int size( void );

	class outlimitException : public std::exception 
		{
			public:
				outlimitException(int pos);
				~outlimitException() throw();
				const char* what() const throw();

			private:
				int pos;
		};

	private:
		T *ptr;
		int sz;

};

template <typename T>
Array<T>::Array() {
	ptr = new T;
	sz = 0;
}

template <typename T>
Array<T>::Array(int s) 
{
	ptr = new T[s];
	sz = s;
}

template <typename T>
Array<T>::Array( const Array<T> &Array ) 
{
	*this = Array;
}

template <typename T>
Array<T>::~Array() {}

template <typename T>
Array<T> & Array<T>::operator = ( const Array<T> &Array )
{
	this->sz = Array.sz;
	this->ptr = new T[this->sz];
	for (int i = 0; i < this->sz; i++)
		ptr[i] = Array.ptr[i];
	return (*this);
}

template <typename T>
T & Array<T>::operator [] ( int index )
{
	if (index < 0 || sz <= index)
		throw Array<T>::outlimitException(index);
	else
		return ptr[index];
}

template <typename T>
int Array<T>::size( void ) { return this->sz; }

template <typename T>
Array<T>::outlimitException::outlimitException ( int pos ) { this->pos = pos; }

template <typename T>
Array<T>::outlimitException::~outlimitException(void) throw () { }

template <typename T>
const char *Array<T>::outlimitException::what() const throw ()
{
	std::string msg = "Position " + std::to_string(this->pos) + " is out of reach.";
	const char* data = msg.data();
	return data;
}

#endif