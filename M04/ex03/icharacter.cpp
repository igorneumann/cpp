/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   icharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:54:58 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/16 10:55:05 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "Icharacter.hpp"

ICharacter()
{
	std::cout << "ICharacter was created empty" << std::endl;
}

ICharacter::ICharacter ( std::string type )
{
	this->type = type;
	std::cout << "ICharacter " << this->type << " was created" << std::endl;
}

ICharacter::~ICharacter ( void )
{
	std::cout << "ICharacter " << this->type << " was deleted" << std::endl;
}

ICharacter::ICharacter(const ICharacter &ICharacter)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = ICharacter;
}

ICharacter & ICharacter::operator = (const ICharacter &ICharacter)
{
	if (this != &ICharacter)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->name = ICharacter.getname();
	}
	return (*this);
}

std::string getname(ICharacter& target);
{
	return this->name;
}