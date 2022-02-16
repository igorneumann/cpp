/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:36:55 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/16 07:45:36 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoo.hpp"

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
		{
			// std::cout << "Assignation operator called" << i << std::endl;
			this->idea[i] = Brain.getIdea(i);
			i++;
		}
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