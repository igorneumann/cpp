/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:36:55 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/15 08:16:53 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoo.hpp"

Dog::Dog () : Animal("Dog"), brain(new Brain)
{
	std::cout << "A Dog started woofing!" << std::endl;
}

Dog::~Dog ( void )
{
	delete this->brain;
	std::cout << "No more Woofs from this one..." << std::endl;
}

Dog::Dog(const Dog &Dog) : Animal("Dog")
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Dog;
}

Dog & Dog::operator = (const Dog &Dog)
{
	if (this != &Dog)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->brain = new Brain(*(Dog.brain));
		this->setType("Dog");
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
	return this->brain->getIdea(id);
}

void Dog::setIdea( std::string cnt, int id )
{
	this->brain->setIdea(cnt, id);
}
