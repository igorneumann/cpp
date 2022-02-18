/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:54:58 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/18 19:40:59 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "Icharacter.hpp"

Character::Character()
{
	int i = 0;

	std::cout << "Character was created empty" << std::endl;
	while (i < 4)
		this->inventory[i++] = NULL;
}

Character::Character ( std::string const & name )
{
	int i = 0;

	this->name = name;
	std::cout << "Character " << this->name << " was created" << std::endl;
	while (i < 4)
		this->inventory[i++] = NULL;
}

Character::~Character ( void )
{
	int i = 0;

	std::cout << "Character " << this->name << " was deleted" << std::endl;
	while (i < 4)
	{
		if (this->inventory[i] != NULL)
		{
			delete this->inventory[i];
			std::cout << "* inventory item at slot " << i << " was deleted *" << std::endl;
		}
		i++;
	}
}

Character::Character ( const Character &Character )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Character;
}

Character & Character::operator = ( const Character &Character )
{
	if ( this != &Character )
	{
		int i = 0;
		std::cout << "Character Assignation operator called" << std::endl;
		this->name = Character.getName();
		while (i < 4)
		{
			if ( Character.getItem(i) != NULL )
			{
				this->inventory[i] = Character.inventory[i]->clone();
				std::cout << "* inventory item at slot " << i << " was copied *" << std::endl;
			}
			i++;
		}
	}
	return (*this);
}

Character* Character::clone() const
{
	std::cout << "* cloning a Character *" << std::endl;
	return ( new Character() );
}

std::string const & Character::getName() const
{
	return this->name;
}

AMateria* const & Character::getItem(int idx) const
{
	return this->inventory[idx];
}

void Character::equip ( AMateria* m )
{
	int i = 0;

	while ( i < 4 && this->inventory[i] != NULL )
		i++;
	if ( i < 4 && this->inventory[i] == NULL )	
	{
		this->inventory[i] = m;
		std::cout << "* equiped at slot " << i << " of " << this->name << " *" << std::endl;
	}
	else
		std::cout << "* no free slots available *" << std::endl;
}

void Character::unequip(int idx)
{
	if ( idx >= 0 && idx < 4 && this->inventory[idx] != NULL )
	{
		this->inventory[idx] = NULL;
		std::cout << "* slot " << idx << " unequiped *" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if ( idx >= 0 && idx < 4 && this->inventory[idx] != NULL )
		this->inventory[idx]->use(target);
}