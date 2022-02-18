/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:10:07 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/18 19:15:00 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "Icharacter.hpp"

Cure::Cure ()
{
	this->type = "cure";
	std::cout << "Cure " << this->type << " was created" << std::endl;
}

Cure::~Cure ( void )
{
	std::cout << "Cure type " << this->type << " was deleted" << std::endl;
}

Cure::Cure(const Cure &Cure)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Cure;
}

Cure & Cure::operator = (const Cure &Cure)
{
	if (this != &Cure)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->type = "cure";
	}
	return (*this);
}

Cure* Cure::clone() const
{
	std::cout << "* cloning a Cure *" << std::endl;
	return (new Cure());
}

std::string const & Cure::getType() const
{
	return (this->type);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}