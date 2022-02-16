/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:10:50 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/16 10:55:08 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "Icharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria was created empty" << std::endl;
}

AMateria::AMateria ( std::string type )
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

void use(ICharacter& target);
{
	this->AMateria::use(target);
}