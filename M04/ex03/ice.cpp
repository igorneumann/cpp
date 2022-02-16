/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:10:13 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/16 09:39:45 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

Ice::Ice ()
{
	std::cout << "Ice was created empty" << std::endl;
}

Ice::Ice ( std::string type )
{
	this->type = type;
	std::cout << "Ice " << this->type << " was created" << std::endl;
}

Ice::~Ice ( void )
{
	std::cout << "Ice " << this->type << " was deleted" << std::endl;
}

Ice::Ice(const AMateria &AMateria)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Ice;
}

Ice & Ice::operator = (const Ice &Ice)
{
	if (this != &Ice)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->type = Ice.getType();
	}
	return (*this);
}

void Ice::clone() const
{
	std::cout << "* cloning an Ice *" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at" << target.getname() << " *" << std::endl;
}