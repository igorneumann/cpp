/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:41:28 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/08 19:05:05 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( std::string name ) : FragTrap(name), ScavTrap(name)
{
	this->setname(name);
	std::cout << "DiamondTrap: " << this->getname() << " was BORN!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = DiamondTrap;
}

DiamondTrap::~DiamondTrap ( void )
{
	std::cout << "DiamondTrap: " << this->getname() << " DIED" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap &DiamondTrap)
{
	if (this != &DiamondTrap)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->setname(this->getname());
	}
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamondTrap: " << this->getname() << " attack " << target << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	FragTrap::takeDamage(amount);
	ScavTrap::takeDamage(amount);
	std::cout << "DiamondTrap: " << this->getname() << " Ouch!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	FragTrap::beRepaired(amount);
	ScavTrap::beRepaired(amount);
	std::cout << "DiamondTrap: " << this->getname() << " YAY!" << std::endl;
}

std::string DiamondTrap::getname( void ) const
{
	return this->ScavTrap::getname();
}

std::string DiamondTrap::getscav( void ) const
{
	return this->ScavTrap::getname();
}

std::string DiamondTrap::getfrap( void ) const
{
	return this->FragTrap::getname();
}

void DiamondTrap::setname( std::string nm )
{
	this->ScavTrap::setname(nm);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is: " << this->getname() << std::endl;
	std::cout << "ClapTrap name is: " << this->getname() << std::endl;
}