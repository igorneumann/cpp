/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:29:54 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/24 17:14:36 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <stdlib.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class PresidentialPardonForm : public Form::Form
{
	public:
		PresidentialPardonForm( std::string const & tgt );
		PresidentialPardonForm( const PresidentialPardonForm &PresidentialPardonForm );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm & operator = ( const PresidentialPardonForm &PresidentialPardonForm );
		std::string const & getTgt(void) const;
		virtual bool doMagic( std::string const & tgt ) const;

	private:
		std::string const tgt;
};

#endif