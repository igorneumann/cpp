/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:04:54 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/08 17:52:09 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) 
{ 
	ScavTrap *ct1;
	ScavTrap *ct2;

	ct1 = new ScavTrap("Igor");
	ct2 = new ScavTrap("Fernando");
	ct1->attack("Fernando");
	ct1->takeDamage(5);
	ct1->beRepaired(5);
	ct1->guardGate();
	ct2->attack("Igor");
	ct2->takeDamage(5);
	ct2->beRepaired(5);
	ct2->guardGate();
	delete ct1;
	delete ct2;
	return(0);
}