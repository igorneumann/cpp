/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:10:50 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/17 18:59:50 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "Icharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria was created empty" << std::endl;
}

AMateria::AMateria( std::string const & type )
{
	this->type = type;
	std::cout << "Amateria " << this->type << " was created" << std::endl;
}

AMateria::~AMateria ( void )
{
	std::cout << "Amateria " << this->type << " was deleted" << std::endl;
}

AMateria::AMateria(const AMateria &AMateria)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = AMateria;
}

AMateria & AMateria::operator = (const AMateria &AMateria)
{
	if (this != &AMateria)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->type = AMateria.getType();
	}
	return (*this);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* " << target.getName() <<" has been attacked * with " << this->type << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->type;
}