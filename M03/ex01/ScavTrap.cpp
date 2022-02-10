/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:05:13 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/08 18:32:57 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap()
{
}

ScavTrap::ScavTrap ( std::string name ) : ClapTrap(name, 100, 50, 20)
{
	this->ClapTrap::setname(name);
	std::cout << "ScavTrap: " << this->getname() << " was BORN!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = ScavTrap;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << "ScavTrap: " << this->getname() << " DIED" << std::endl;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &ScavTrap)
{
	if (this != &ScavTrap)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->setname(this->getname());
	}
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap: " << this->getname() << " attack " << target << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << "ScavTrap: " << this->getname() << " Ouch!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << "ScavTrap: " << this->getname() << " YAY!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << this->getname() << " have enterred in Gate keeper mode." << std::endl;
}

std::string ScavTrap::getname( void ) const
{
	return this->ClapTrap::getname();
}

void ScavTrap::setname( std::string nm )
{
	this->ClapTrap::setname(nm);
}