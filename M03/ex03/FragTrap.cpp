/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:37:57 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/08 19:05:01 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap()
{
	std::cout << "FragTrap: with no name was BORN!" << std::endl;
}

FragTrap::FragTrap ( std::string name ) : ClapTrap(name, 100, 100, 30)
{
	this->ClapTrap::setname(name);
	std::cout << "FragTrap: " << this->ClapTrap::getname() << " was BORN!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = FragTrap;
}

FragTrap::~FragTrap ( void )
{
	std::cout << "FragTrap: " << this->ClapTrap::getname() << " DIED" << std::endl;
}

FragTrap & FragTrap::operator = (const FragTrap &FragTrap)
{
	if (this != &FragTrap)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->ClapTrap::setname(this->ClapTrap::getname());
	}
	return (*this);
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap: " << this->ClapTrap::getname() << " attack " << target << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << "FragTrap: " << this->ClapTrap::getname() << " Ouch!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << "FragTrap: " << this->ClapTrap::getname() << " YAY!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: " << this->ClapTrap::getname() << " HIGHFIVE!" << std::endl;
}

std::string FragTrap::getname( void ) const
{
	return this->ClapTrap::getname();
}

void FragTrap::setname( std::string nm )
{
	this->ClapTrap::setname(nm);
}