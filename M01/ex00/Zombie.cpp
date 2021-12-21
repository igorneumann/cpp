/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:18:42 by igorneumann       #+#    #+#             */
/*   Updated: 2021/12/21 18:59:04 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	_name = name;
}

Zombie::~Zombie( void )
{
	std::cout << _name << "No more Brainz..." << std::endl;
}
 
void randomChump( std::string name )
{
	Zombie zmb(name);
	zmb.announce();
}

void Zombie::announce( void )
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}