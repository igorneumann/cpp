/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:25:10 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/16 19:52:22 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

#include <iostream>
#include <string>
#include <iterator>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack( void );
		MutantStack( const MutantStack &MutantStack );
		~MutantStack( void );
		MutantStack & operator = ( const MutantStack &MutantStack );

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void);
		iterator	end(void);
};

#endif