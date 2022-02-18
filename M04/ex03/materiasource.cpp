/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materiasource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:59:56 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/18 19:40:32 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

MateriaSource::MateriaSource ()
{
	int i = 0;

	std::cout << "Materiasource " << " was created empty" << std::endl;
	while (i < 4)
		this->inventory[i++] = NULL;
}

MateriaSource::~MateriaSource ( void )
{
	int i = 0;

	std::cout << "Materiasource " << " was deleted" << std::endl;
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

MateriaSource::MateriaSource(const MateriaSource &MateriaSource)
{
	std::cout << "Materiasource Copy constructor called" << std::endl;
	*this = MateriaSource;
}

MateriaSource & MateriaSource::operator = (const MateriaSource &MateriaSource)
{
	if ( this != &MateriaSource )
	{
		int i = 0;

		std::cout << "MateriaSource Assignation operator called" << std::endl;
		while (i < 4)
		{
			if ( MateriaSource.inventory[i] != NULL )
			{
				this->inventory[i] = MateriaSource.inventory[i]->clone();
				std::cout << "* inventory item at slot " << i << " was copied *" << std::endl;
			}
			i++;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria( AMateria* m )
{
	int i = 0;

	if (m != NULL)
	{
		while ( i < 4 && this->inventory[i] != NULL )
			i++;
		if ( i < 4 && this->inventory[i] == NULL )
		{
			this->inventory[i] = m;
			std::cout << this->inventory[i]->getType() << "* learned at slot " << i << " *" << std::endl;
		}
		else
			std::cout << "* Already learned enough #" << i << " *" << std::endl;
	}
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	int i = 0;

	while (i < 4 && this->inventory[i] != NULL)
	{
		if (type.compare(this->inventory[i]->getType())== 0)
		{
			std::cout << this->inventory[i]->getType() << " created" << std::endl;
			return this->inventory[i]->clone();
		}
		i++;
	}
	return 0;
}