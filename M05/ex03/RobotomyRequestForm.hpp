/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:30:00 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/23 19:50:59 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_H
# define ROBOTMYREQUESTFORM_H

#include <iostream>
#include <stdlib.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form::Form
{
	public:
		RobotomyRequestForm( std::string const & tgt );
		RobotomyRequestForm( const RobotomyRequestForm &RobotomyRequestForm );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm & operator = ( const RobotomyRequestForm &RobotomyRequestForm );
		std::string const & getTgt(void) const;
		virtual bool doMagic( std::string const & tgt ) const;

	private:
		std::string const tgt;
};

#endif