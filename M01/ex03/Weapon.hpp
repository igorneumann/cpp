/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:06:17 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/13 20:50:09 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <stdlib.h>
#include <string>

class Weapon
{
	public:
	Weapon( std::string wptype );
	~Weapon(void);
	std::string getType( void );
	void setType( std::string wptype );

	private:
	std::string	weapon_type;
};

#endif