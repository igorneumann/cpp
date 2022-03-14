/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:42:42 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/14 18:29:30 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	int a[3] = { 1, 2, 3 };

	::iter( a, 3, func1 );
	::iter( a, 3, func2 );
	::iter( a, 3, func3 );

	int b[3] = { 4, 5, 6 };

	::iter( b, 3, func1 );
	::iter( b, 3, func2 );
	::iter( b, 3, func3 );

	char c[8] = "chaine1";

	::iter( c, 7, func1 );
	::iter( c, 7, func2 );
	::iter( c, 7, func3 );

	char d[8] = "chaine2";

	::iter( d, 7, func1 );
	::iter( d, 7, func2 );
	::iter( d, 7, func3 );

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- Qué sentido tiene no poder escribir int[] tab. No sería más simple??
	Awesome tab2[5];

	::iter( tab, 5, print );
	::iter( tab2, 5, print );

	return 0;
}