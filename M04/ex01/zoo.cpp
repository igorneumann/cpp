/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoo.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:36:55 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/10 20:00:36 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoo.hpp"

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

std::string Dog::getIdea( int id ) const
{
	return this->Brain::getIdea(id);
}

void Dog::setIdea( std::string cnt, int id )
{
	this->Brain::setIdea(cnt, id);
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

std::string Cat::getIdea( int id ) const
{
	return this->Brain::getIdea(id);
}

void Cat::setIdea( std::string cnt, int id )
{
	this->Brain::setIdea(cnt, id);
}