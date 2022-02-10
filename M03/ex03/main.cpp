/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:04:54 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/08 19:07:17 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) 
{ 
	//ClapTrap *ct1;
	//ScavTrap *ct2;
	//FragTrap *ct3;
	DiamondTrap *ct4;

	//ct1 = new ClapTrap("Igor");
	//ct2 = new ScavTrap("Fernando");
	//ct3 = new FragTrap("Eduardo");
	ct4 = new DiamondTrap("Alberto");
	//ct1->attack("Eduardo");
	/*ct1->takeDamage(5);
	ct1->beRepaired(5);
	ct2->attack("Igor");
	ct2->takeDamage(5);
	ct2->beRepaired(5);
	ct2->guardGate();
	ct3->attack("Fernando");
	ct3->takeDamage(5);
	ct3->beRepaired(5);
	ct3->highFivesGuys();
	ct4->attack("Igor");
	ct4->takeDamage(5);
	ct4->beRepaired(5);*/
	std::cout << "ScavName is" << ct4->getscav() << std::endl;
	std::cout << "FrapName is" << ct4->getfrap() << std::endl;
	std::cout << "Change ScavName" << std::endl;
	ct4->setname("NewName");
	std::cout << "Now ScavName is " << ct4->getscav() << std::endl;
	std::cout << "Now FrapName is " << ct4->getfrap() << std::endl;
	/*delete ct1;
	delete ct2;
	delete ct3;*/
	delete ct4;
	return(0);
}