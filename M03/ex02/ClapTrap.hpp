/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:05:07 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/08 19:08:26 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <stdlib.h>
#include <string>

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int atd);
	ClapTrap (const ClapTrap &ClapTrap);
	virtual ~ClapTrap(void);
	ClapTrap & operator = (const ClapTrap &ClapTrap);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getname( void ) const;
	void setname( std::string nm );

	private:
	std::string name;
	unsigned int hitpoints;
	unsigned int enpoints;
	unsigned int atdamage;
};

#endif