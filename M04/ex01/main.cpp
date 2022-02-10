/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:19:31 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/10 20:01:35 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoo.hpp"

int main() 
{
	int i = 0;
	int j = 0;
	Animal* k[10];
//	Animal* l[10];
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
			think = "Idea #" + std::to_string(i);
			k[j]->setIdea(think, i);
			i++;
		}
		j++;
	}/*
	std::cout << "Copying array" << std::endl;
	j = 0;
	while (j < 10)
	{
		l[j] = k[j];
		j++;
	}
	std::cout << "Spitting shitty thoughts" << std::endl;
	j = 0;
	i = 0;
	while (j < 10)
	{
		while (i < 90)
		{
			k[j]->getIdea(i);
			i++;
		}
		j++;
	}*/
	j = 0;
	while (j < 10)
	{
		std::cout << k[j]->getType() << std::endl;
		k[j]->makeSound();
		j++;
	}
	j = 10;
	while (j-- > 0)
	{
		delete k[j];
	//	delete l[j];
	}
}