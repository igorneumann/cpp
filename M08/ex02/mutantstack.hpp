/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:25:10 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/18 19:31:29 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

#include <iostream>
#include <string>
#include <iterator>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack( void ) : std::stack<T>() {};
		MutantStack( const MutantStack &MutantStack ) : std::stack<T>(MutantStack)
		{
			if (this != &MutantStack)
				*this = MutantStack;
		};
		~MutantStack( void ) { };
		MutantStack & operator = ( const MutantStack &MutantStack )
		{
			std::stack<T>::operator=(MutantStack);
 			return *this;
		};
		typedef typename std::stack<T>::container_type::iterator iterator;
			iterator	begin(void)
			{
				return this->c.begin();
			};
			iterator	end(void)
			{
				return this->c.end();
			};
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
			const_iterator	begin(void) const
			{
				return this->c.begin();
			};
			const_iterator	end(void) const
			{
				return this->c.end();
			};
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
			reverse_iterator	rbegin(void)
			{
				return this->c.rbegin();
			};
			reverse_iterator	rend(void)
			{
				return this->c.rend();
			};
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
			const_reverse_iterator	rbegin(void) const
			{
				return this->c.rbegin();
			};
			const_reverse_iterator	rend(void) const
			{
				return this->c.rend();
			};
};

#endif