/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:37:57 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/04 19:40:41 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap ( std::string name ) : ClapTrap(name, 100, 100, 30)
{
	this->name = name;
	std::cout << "FragTrap: " << this->name << " was BORN!" << std::endl;
}

FragTrap::~FragTrap ( void )
{
	std::cout << "FragTrap: " << this->name << " DIED" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap: " << this->name << " attack " << target << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << "FragTrap: " << this->name << " Ouch!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << "FragTrap: " << this->name << " YAY!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: " << this->name << " HIGHFIVE!" << std::endl;
}
