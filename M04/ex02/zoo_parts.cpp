/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoo_parts.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:36:55 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/11 09:13:38 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoo.hpp"

Animal::Animal ()
{
	std::cout << "An unindentified Animal started doing something... I guess." << std::endl;
}

Animal::Animal ( std::string type )
{
	this->type = type;
	std::cout << "A " << this->type << " was BORN!" << std::endl;
}

Animal::~Animal ( void )
{
	std::cout << "A " << this->type << " DIED" << std::endl;
}

Animal::Animal(const Animal &Animal)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Animal;
}

Animal & Animal::operator = (const Animal &Animal)
{
	if (this != &Animal)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->type = Animal.getType();
	}
	return (*this);
}

void Animal::makeSound( void ) const
{
	int pos = 0;

	std::string options[2] = {"Cat", "Dog"};
	while (pos < 2 && this->type.compare(options[pos])!= 0)
		pos++;
	switch(pos)
	{
		case 0:
			std::cout << "MEOW" << std::endl;
			break;
		case 1:
			std::cout << "WOOF" << std::endl;
			break;
		case 2:
			std::cout << "* * Spooky Undetermined sound * *" << std::endl;
			break;
	}
}

std::string Animal::getType( void ) const
{
	return this->type;
}

void Animal::setType( std::string type )
{
	this->type = type;
}

Brain::Brain ()
{
	std::cout << "An empty brain appeared" << std::endl;
}

Brain::Brain ( std::string id[100] )
{
	int i = 0;

	while (i < 100)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->idea[i] = id[i];
		i++;
	}
	std::cout << "A brain started thinking" << std::endl;
}

Brain::~Brain ( void )
{
	std::cout << "Braindead..." << std::endl;
}

Brain::Brain(const Brain &Brain)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Brain;
}

Brain & Brain::operator = (const Brain &Brain)
{
	int i = 0;

	if (this != &Brain)
	{
		while (i < 100)
		//std::cout << "Assignation operator called" << std::endl;
		this->idea[i] = Brain.getIdea(i);
		i++;
	}
	return (*this);
}

std::string Brain::getIdea( int id ) const
{
	return this->idea[id];
}

void Brain::setIdea( std::string cnt, int id )
{
	this->idea[id] = cnt;
}