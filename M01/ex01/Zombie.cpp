/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:18:42 by igorneumann       #+#    #+#             */
/*   Updated: 2022/01/11 19:01:33 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::setname( std::string name )
{
	_name = name;
}

Zombie::~Zombie( void )
{
	std::cout << "<" << _name << "> No more Brainz..." << std::endl;
}

void Zombie::announce( void )
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}