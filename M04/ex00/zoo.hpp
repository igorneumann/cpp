/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoo.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:20:52 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/18 19:57:14 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOO_H
# define ZOO_H

#include <iostream>
#include <stdlib.h>

class Animal
{
	public:

		Animal();
		Animal(std::string type);
		Animal (const Animal &Animal);
		virtual ~Animal(void);
		Animal & operator = (const Animal &Animal);
		std::string getType( void ) const;
		void setType(std::string type);
		virtual void makeSound( void ) const;

	private:

		std::string type;
};

class Dog : public Animal
{
	public:

		Dog();
		Dog (const Dog &Dog);
		virtual ~Dog(void);
		Dog & operator = (const Dog &Dog);
		std::string getType( void ) const;
		void setType(std::string type);
		virtual void makeSound( void ) const;

	private:
};

class Cat : public Animal
{
	public:

		Cat();
		Cat (const Cat &Cat);
		virtual ~Cat(void);
		Cat & operator = (const Cat &Cat);
		std::string getType( void ) const;
		void setType(std::string type);
		virtual void makeSound( void ) const;

	private:
};

#endif