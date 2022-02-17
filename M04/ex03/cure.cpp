/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:10:07 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/17 19:02:25 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "Icharacter.hpp"

Cure::Cure ()
{
	std::cout << "Cure was created empty" << std::endl;
}

Cure::Cure ( std::string const & type )
{
	this->type = type;
	std::cout << "Cure " << this->type << " was created" << std::endl;
}

Cure::~Cure ( void )
{
	std::cout << "Cure " << this->type << " was deleted" << std::endl;
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
		this->type = Cure.getType();
	}
	return (*this);
}

Cure* Cure::clone() const
{
	std::cout << "* cloning a Cure *" << std::endl;
	return (new Cure(this->type));
}

std::string const & Cure::getType() const
{
	return (this->type);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}