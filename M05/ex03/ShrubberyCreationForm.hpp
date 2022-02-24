/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:30:07 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/23 19:58:23 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHCRUBBERYCREATIONSFORM_H
# define SHCRUBBERYCREATIONSFORM_H

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form::Form
{
	public:
		ShrubberyCreationForm( std::string const & tgt );
		ShrubberyCreationForm( const ShrubberyCreationForm &ShrubberyCreationForm );
		virtual ~ShrubberyCreationForm( void );
		ShrubberyCreationForm & operator = ( const ShrubberyCreationForm &ShrubberyCreationForm );
		std::string const & getTgt(void) const;
		virtual bool doMagic( std::string const & tgt ) const;

	private:
		std::string const tgt;
};

#endif