/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:20:52 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/16 09:52:32 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include <stdlib.h>

class ICharacter
{
	public:
		ICharacter();
		ICharacter(std::string const & name);
		ICharacter( const ICharacter &ICharacter );
		ICharacter & operator = (const ICharacter &ICharacter);
		std::string const & getType() const;
		virtual ICharacter* clone() const;
		void getname();
		
	private:
		std::string name;
};

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(std::string const & type);
		AMateria( const AMateria &AMateria );
		AMateria & operator = (const AMateria &AMateria);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
	protected:
		std::string type;

	public:
		Ice();
		Ice(std::string const & type);
		Ice( const Ice &Ice );
		Ice & operator = (const Ice &Ice);
		std::string const & getType() const;
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

class Cure : public AMateria
{
	protected:
		std::string type;

	public:
		Cure();
		Cure(std::string const & type);
		Cure( const Cure &Cure );
		Cure & operator = (const Cure &Cure);
		std::string const & getType() const;
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif