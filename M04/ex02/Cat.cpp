/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:36:55 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/15 08:16:58 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoo.hpp"

Cat::Cat () : Animal("Cat"), brain(new Brain)
{
	std::cout << "A Cat started meowing!" << std::endl;
}

Cat::~Cat ( void )
{
	delete this->brain;
	std::cout << "No more meows from this one..." << std::endl;
}

Cat::Cat(const Cat &Cat) : Animal("Cat")
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat & Cat::operator = (const Cat &Cat)
{
	if (this != &Cat)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->setType("Cat");
		this->brain = new Brain(*(Cat.brain));
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
	return this->brain->getIdea(id);
}

void Cat::setIdea( std::string cnt, int id )
{
	this->brain->setIdea(cnt, id);
}