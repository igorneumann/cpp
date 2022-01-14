/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:02:46 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/13 20:34:29 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string wptype )
{
	Weapon::setType(wptype);
}

Weapon::~Weapon( void )
{
}

std::string Weapon::getType( void )
{
	return (weapon_type);
}

void Weapon::setType( std::string wp_type )
{
	weapon_type = wp_type;
}