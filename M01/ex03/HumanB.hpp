/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:05:51 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/14 18:26:01 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB( std::string nm );
	~HumanB(void);
	void setWeapon( Weapon &wp );
	std::string getName( void );
	void setName( std::string nm );
	void attack( void );

	private:
	Weapon	*WeaponB;
	std::string	name;
};

/*
*** main.cpp
*/

/*
*** HumanB.cpp
*/

#endif