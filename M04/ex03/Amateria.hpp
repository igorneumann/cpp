/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:20:52 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/17 17:35:18 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include <stdlib.h>
#include "Icharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( const AMateria &AMateria );
		~AMateria( void );
		AMateria & operator = ( const AMateria &AMateria );
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter& target );
};

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria( AMateria* ) = 0;
		virtual AMateria* createMateria( std::string const & type ) = 0;
};

class Ice : public AMateria
{
	protected:
		std::string type;

	public:
		Ice();
		Ice(std::string const & type);
		Ice( const Ice &Ice );
		~Ice( void );
		Ice & operator = ( const Ice &Ice );
		std::string const & getType() const;
		virtual Ice* clone() const;
		virtual void use( ICharacter& target );
};

class Cure : public AMateria
{
	protected:
		std::string type;

	public:
		Cure();
		Cure( std::string const & type );
		Cure( const Cure &Cure );
		~Cure( void );
		Cure & operator = ( const Cure &Cure );
		std::string const & getType() const;
		virtual Cure* clone() const;
		virtual void use( ICharacter& target );
};

#endif