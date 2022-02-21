/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:36:55 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/18 20:06:14 by ineumann         ###   ########.fr       */
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
	std::cout << "* * Spooky Undetermined sound * *" << std::endl;
}

std::string Animal::getType( void ) const
{
	return this->type;
}

void Animal::setType( std::string type )
{
	this->type = type;
}

std::string Animal::getIdea( int id ) const
{
	(void)id;
	std::cout << "* * NO BRAIN * *" << std::endl;
	return 0;
}

void Animal::setIdea( std::string cnt, int id )
{
	(void)id;
	(void)cnt;
	std::cout << "* * NO BRAIN * *" << std::endl;
}