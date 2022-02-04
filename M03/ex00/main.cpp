/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:04:54 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/02 18:33:09 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{ 
	ClapTrap *ct1;
	ClapTrap *ct2;

	ct1 = new ClapTrap("Igor");
	ct2 = new ClapTrap("Fernando");
	ct1->attack("Fernando");
	ct1->takeDamage(5);
	ct1->beRepaired(5);
	ct2->attack("Igor");
	ct2->takeDamage(5);
	ct2->beRepaired(5);
	delete ct1;
	delete ct2;
	return(0);
}