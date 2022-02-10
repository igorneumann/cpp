/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:05:07 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/08 19:03:42 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap (const FragTrap &FragTrap);
		virtual ~FragTrap(void);
		FragTrap & operator = (const FragTrap &FragTrap);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getname( void ) const;
		void setname( std::string nm );
		void highFivesGuys();
};


#endif