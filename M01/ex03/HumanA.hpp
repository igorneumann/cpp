/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:03:31 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/14 18:29:44 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA( std::string nm, Weapon &wp );
	~HumanA(void);
	std::string getName( void );
	void setName( std::string nm );
	void attack( void );

	private:
	Weapon	*WeaponA;
	std::string	name;
};

/*
*** main.cpp
*/

/*
*** HumanA.cpp
*/

#endif