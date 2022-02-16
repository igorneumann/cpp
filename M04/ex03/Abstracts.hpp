/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Abstracts.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:20:52 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/16 11:10:03 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTS_H
# define ABSTRACTS_H

#include <iostream>
#include <stdlib.h>
#include "Icharacter.hpp"
#include "Amateria.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria( const AMateria &AMateria );
		~AMateria(void);
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
		~Ice(void);
		Ice & operator = (const Ice &Ice);
		std::string const & getType() const;
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif