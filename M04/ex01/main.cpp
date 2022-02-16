/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:19:31 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/15 08:12:10 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoo.hpp"
#include <string>
#include <sstream>

int main() 
{
	std::ostringstream ss;
	int i = 0;
	int j = 0;
	Animal* k[10];
	Animal* l[10];
	std::string think;
	
	std::cout << "Creating a bunch of sh*t" << std::endl;
	while (i < 5)
	{
		k[i] = new Dog();
		i++;
	}
	while (i < 10)
	{
		k[i] = new Cat();
		i++;
	}
	std::cout << "Generating shitty thoughts" << std::endl;
	i = 0;
	while (j < 10)
	{
		while (i < 99)
		{
			ss << i;
			think = "Idea #" + ss.str();
			k[j]->setIdea(think, i);
			i++;
		}
		j++;
	}
	std::cout << "Spitting shitty thoughts" << std::endl;
	j = 0;
	i = 0;
	while (j < 10)
	{
		while (i < 90)
		{
			std::cout << k[j]->getIdea(i) << std::endl;
			i++;
		}
		j++;
	}
	std::cout << "Copying array" << std::endl;
	j = 0;
	while (j < 5)
	{
		l[j] = new Dog(*(Dog *)k[j]);
		j++;
	}
	while (j < 10)
	{
		l[j] = new Cat(*(Cat *)k[j]);
		j++;
	}
	std::cout << "Spitting shitty copy thoughts" << std::endl;
	j = 0;
	i = 0;
	while (j < 10)
	{
		while (i < 90)
		{
			std::cout << l[j]->getIdea(i) << std::endl;
			i++;
		}
		j++;
	}
	std::cout << "Making some noise" << std::endl;
	j = 0;
	while (j < 10)
	{
		std::cout << k[j]->getType() << std::endl;
		k[j]->makeSound();
		j++;
	}
	std::cout << "Killing them with fire!" << std::endl;
	j = 10;
	while (j-- > 0)
	{
		delete k[j];
		delete l[j];
	}
}