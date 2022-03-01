/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:53:20 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/01 19:36:28 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include<cstring>
#include <stdlib.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class Intern
{
	public:
		Intern( void );
		Intern( const Intern &Intern );
		virtual ~Intern( void );
		Intern & operator = ( const Intern &Intern );
		Form *makeForm( std::string const & name,  std::string const & target );

	private:
		std::string const tgt;
};

#endif