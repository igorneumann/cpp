/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoo.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:36:55 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/10 17:19:31 by ineumann         ###   ########.fr       */
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

Dog::Dog () : Animal("Dog")
{
	std::cout << "A Dog started woofing!" << std::endl;
}

Dog::~Dog ( void )
{
	std::cout << "No more Woofs from this one..." << std::endl;
}

Dog::Dog(const Dog &Dog)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Dog;
}

Dog & Dog::operator = (const Dog &Dog)
{
	if (this != &Dog)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->setType(Dog.Animal::getType());
	}
	return (*this);
}

void Dog::setType( std::string type )
{
	this->Animal::setType(type);
}

std::string Dog::getType( void ) const
{
	return this->Animal::getType();
}

void Dog::makeSound( void ) const
{
	this->Animal::makeSound();
}

Cat::Cat () : Animal("Cat")
{
	std::cout << "A Cat started meowing!" << std::endl;
}

Cat::~Cat ( void )
{
	std::cout << "No more meows from this one..." << std::endl;
}

Cat::Cat(const Cat &Cat)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat & Cat::operator = (const Cat &Cat)
{
	if (this != &Cat)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->setType(Cat.Animal::getType());
	}
	return (*this);
}

void Cat::setType( std::string type )
{
	this->Animal::setType(type);
}

std::string Cat::getType( void ) const
{
	return this->Animal::getType();
}

void Cat::makeSound( void ) const
{
	this->Animal::makeSound();
}