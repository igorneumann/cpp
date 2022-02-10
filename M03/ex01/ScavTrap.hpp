/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:05:07 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/08 19:09:25 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap (const ScavTrap &ScavTrap);
		virtual ~ScavTrap(void);
		ScavTrap & operator = (const ScavTrap &ScavTrap);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getname( void ) const;
		void setname( std::string nm );
		void guardGate();

};

#endif