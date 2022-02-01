/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:05:13 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/01 20:03:23 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( std::string name )
{
	this->name = name;
	this->hitpoints = 10; 
	this->enpoints = 10;
	this->atdamage = 0;
	std::cout << this->name << " was BORN!" << std::endl;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << this->name << " took " << this->hitpoints << " points of damage AND DIED" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing" << this->atdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->hitpoints)
	{
		this->hitpoints -= amount;
		std::cout << this->name << " took " << amount << " points of damage" << std::endl;
	}
	else
		delete this;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " healed " << amount << " points" << std::endl;
	this->hitpoints += amount;
}

