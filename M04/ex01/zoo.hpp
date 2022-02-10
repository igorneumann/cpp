/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoo.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:20:52 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/10 19:58:08 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOO_H
# define ZOO_H

#include <iostream>
#include <stdlib.h>

class Brain
{
	public:

		Brain();
		Brain( std::string x[100] );
		Brain ( const Brain &Brain );
		~Brain( void );
		Brain & operator = (const Brain &Brain);
		std::string getIdea( int id ) const;
		void setIdea( std::string cnt, int id );

	private:
		std::string idea[100];
};

class Animal
{
	public:

		Animal();
		Animal( std::string type );
		Animal ( const Animal &Animal );
		~Animal( void );
		Animal & operator = (const Animal &Animal);
		std::string getType( void ) const;
		void setType(std::string type);
		void makeSound( void ) const;

	private:

		std::string type;
};

class Dog : public Animal, private Brain
{
	public:

		Dog();
		Dog (const Dog &Dog);
		~Dog(void);
		Dog & operator = (const Dog &Dog);
		std::string getType( void ) const;
		void setType(std::string type);
		void makeSound( void ) const;
		std::string getIdea( int id ) const;
		void setIdea( std::string cnt, int id );

	private:
};

class Cat : public Animal, private Brain
{
	public:

		Cat();
		Cat (const Cat &Cat);
		~Cat(void);
		Cat & operator = (const Cat &Cat);
		std::string getType( void ) const;
		void setType(std::string type);
		void makeSound( void ) const;
		std::string getIdea( int id ) const;
		void setIdea( std::string cnt, int id );

	private:
};

#endif