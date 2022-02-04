/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:04:54 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/04 19:46:02 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) 
{ 
	ClapTrap *ct1;
	ScavTrap *ct2;
	FragTrap *ct3;

	ct1 = new ClapTrap("Igor");
	ct2 = new ScavTrap("Fernando");
	ct3 = new FragTrap("Fernando");
	ct1->attack("Fernando");
	ct1->takeDamage(5);
	ct1->beRepaired(5);
	ct2->attack("Igor");
	ct2->takeDamage(5);
	ct2->beRepaired(5);
	ct2->guardGate();
	ct3->attack("Fernando");
	ct3->takeDamage(5);
	ct3->beRepaired(5);
	ct3->highFivesGuys();
	delete ct1;
	delete ct2;
	delete ct3;
	return(0);
}