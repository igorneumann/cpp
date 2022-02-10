/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:41:25 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/08 19:03:07 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:

		DiamondTrap();
		DiamondTrap (const DiamondTrap &DiamondTrap);
		DiamondTrap(std::string name);
		virtual ~DiamondTrap(void);
		DiamondTrap & operator = (const DiamondTrap &DiamondTrap);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getname( void ) const;
		std::string getscav( void ) const;
		std::string getfrap( void ) const;
		void setname( std::string nm );
		void whoAmI();
};

#endif