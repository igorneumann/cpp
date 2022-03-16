/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:37:11 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/16 18:48:44 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <string>
#include <vector>

class Span
{
    public:
	    Span( int sz );
		Span( const Span &Span );
		~Span( void );
		Span & operator = ( const Span &Span );
    	int getSize( void );
    	void setSize( int sz );
    	int getFilled( void );
    	void addFilled( void );
    	void setFilled( int fl );
    	int getValue( int index );
        void setValue( int vl, int index );
        void addNumber( int vl );
        int shortestSpan( void );
        int longestSpan( void );
		void print( void );

		class VectorFilled : public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Vector is already full!";
				}
		};
		class Notenough : public std::exception
		{
			public:
				Notenough ( int pos ) { this->pos = pos; }
				char const * what() const throw()
				{
					std::string msg = "Vector has just " + std::to_string(this->pos) + " values, are necessary at least 2.";
					const char* data = msg.data();
					return data;
				}
			private:
				int pos;
		};
        
    private:
        int 				size;
        std::vector<int>	value;
        int					filled;
};

#endif