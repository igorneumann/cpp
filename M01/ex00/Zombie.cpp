/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:18:42 by igorneumann       #+#    #+#             */
/*   Updated: 2021/11/08 09:52:28 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( string name )
{
	_name = name;
	return ;
}

Zombie::~Zombie()
{
	return ;
}

void Zombie::announce( void )
	{
		cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << endl;
	};