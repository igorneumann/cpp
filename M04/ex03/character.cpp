/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:54:58 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/17 19:14:40 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "Icharacter.hpp"

Character::Character()
{
	std::cout << "Character was created empty" << std::endl;
}

Character::Character ( std::string const & name )
{
	this->name = name;
	std::cout << "Character " << this->name << " was created" << std::endl;
}

Character::~Character ( void )
{
	std::cout << "Character " << this->name << " was deleted" << std::endl;
}

Character::Character(const Character &Character)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Character;
}

Character & Character::operator = (const Character &Character)
{
	if (this != &Character)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->name = Character.getName();
	}
	return (*this);
}

Character* Character::clone() const
{
	std::cout << "* cloning a Character *" << std::endl;
	return (new Character());
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (i < 4 && this->inventory[i] != NULL)
		i++;
	if (i < 4 &&this->inventory[i] == NULL)
	{
		this->inventory[i] = m;
		std::cout << "* equiped at slot " << i << " *" << std::endl;
	}
	else
		std::cout << "* no free slots available *" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 4 && this->inventory[idx] != NULL)
	{
		this->inventory[idx] = NULL;
		std::cout << "* slot " << idx << " unequiped *" std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}