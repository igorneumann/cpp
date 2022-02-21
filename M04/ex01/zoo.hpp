/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoo.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:20:52 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/18 20:06:58 by ineumann         ###   ########.fr       */
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
		virtual ~Animal( void );
		Animal & operator = (const Animal &Animal);
		std::string getType( void ) const;
		void setType(std::string type);
		virtual void makeSound( void ) const;
		virtual std::string getIdea( int id ) const;
		virtual void setIdea( std::string cnt, int id );


	private:

		std::string type;
};

class Dog : public Animal
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
		Brain	*brain;
};

class Cat : public Animal
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
		Brain	*brain;
};

#endif