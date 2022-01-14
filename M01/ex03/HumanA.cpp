/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:03:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/14 18:29:40 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string nm, Weapon &wp ) : WeaponA(&wp), name(nm)
{
	// HumanA::setName(nm);
	// HumanA::setWeapon(wp);
}

HumanA::~HumanA( void )
{
}

std::string HumanA::getName( void )
{
	return (name);
}

void HumanA::setName( std::string nm )
{
	name = nm;
}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with his " << this->WeaponA->getType() << std::endl;
}