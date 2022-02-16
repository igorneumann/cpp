/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:10:07 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/16 09:52:40 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

Cure::Cure ()
{
	std::cout << "Cure was created empty" << std::endl;
}

Cure::Cure ( std::string type )
{
	this->type = type;
	std::cout << "Cure " << this->type << " was created" << std::endl;
}

Cure::~Cure ( void )
{
	std::cout << "Cure " << this->type << " was deleted" << std::endl;
}

Cure::Cure(const AMateria &AMateria)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = AMateria;
}

Cure & Cure::operator = (const Cure &Cure)
{
	if (this != &Cure)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->type = Cure.getType();
	}
	return (*this);
}

void Ice::clone() const
{
	std::cout << "* cloning a Cure *" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getname() << " wounds *" << std::endl;
}