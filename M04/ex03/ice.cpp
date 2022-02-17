/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:10:13 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/17 19:03:26 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "Icharacter.hpp"

Ice::Ice ()
{
	std::cout << "Generic Ice was created" << std::endl;
}

Ice::Ice ( std::string const & type )
{
	this->type = type;
	std::cout << "Ice " << this->type << " was created" << std::endl;
}

Ice::~Ice ( void )
{
	std::cout << "Ice " << this->type << " was deleted" << std::endl;
}

Ice::Ice(const Ice &Ice)
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

Ice* Ice::clone() const
{
	std::cout << "* cloning an Ice *" << std::endl;
	return (new Ice(this->type));
}

std::string const & Ice::getType() const
{
	return (this->type);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
}