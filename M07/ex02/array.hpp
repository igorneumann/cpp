/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:27:30 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/11 19:31:58 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class Array {

	public:
	Array<T>( void ) : Array(NULL), sz(0) {	}

	Array<T>(int s) 
	{
		ptr = new T[s];
		sz = s;
	}
	
	Array<T>( const Array<T> &Array )
	{
		this->ptr = new T[Array.sz];
		*this = Array;
	}

	~Array<T>() {delete [] this->ptr;}

	Array<T> & operator = ( const Array<T> &Array )
	{
		if (this->sz > 0)
			delete [] this->ptr;

		this->sz = Array.sz;
		this->ptr = new T[this->sz];
		for (int i = 0; i < this->sz; i++)
			ptr[i] = Array.ptr[i];
		return (*this);
	}

	T & operator [] ( int index )
	{
		if (index < 0 || sz <= index)
			throw Array<T>::outlimitException(index);
		else
			return ptr[index];
	}

	int size( void ) { return this->sz; }

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