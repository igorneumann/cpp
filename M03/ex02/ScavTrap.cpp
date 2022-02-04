/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:05:13 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/04 18:37:56 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( std::string name ) : ClapTrap(name, 100, 50, 20)
{
	this->name = name;
	std::cout << "ScavTrap: " << this->name << " was BORN!" << std::endl;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << "ScavTrap: " << this->name << " DIED" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap: " << this->name << " attack " << target << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << "ScavTrap: " << this->name << " Ouch!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << "ScavTrap: " << this->name << " YAY!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << this->name << " have enterred in Gate keeper mode." << std::endl;
}