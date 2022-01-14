/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:05:42 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/14 18:26:15 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string nm ) : name(nm)
{
	// HumanB::setName(nm);
}

HumanB::~HumanB( void )
{
}

std::string HumanB::getName( void )
{
	return (name);
}

void HumanB::setName( std::string nm )
{
	name = nm;
}

void HumanB::setWeapon( Weapon &wp )
{
	WeaponB = &wp;
}

void HumanB::attack( void )
{
	std::cout << this->name << " attacks with his " << this->WeaponB->getType() << std::endl;
}