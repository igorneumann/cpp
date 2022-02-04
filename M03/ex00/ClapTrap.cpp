/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:05:13 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/02 18:37:14 by ineumann         ###   ########.fr       */
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
	std::cout << "ClapTrap " << this->name << " DIED" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->atdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	std::cout << this->name << " took " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " healed " << amount << " points" << std::endl;
	this->hitpoints += amount;
}

