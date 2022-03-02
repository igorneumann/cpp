/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:53:20 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/02 18:02:23 by ineumann         ###   ########.fr       */
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
		Form * CreateShrubberyCreationForm(std::string const & target);
		Form * CreateRobotomyForm(std::string const & target);
		Form * CreatePresidentialPardonForm(std::string const & target);

	private:
		std::string const	tgt;

	class InvalidFormNameError : public std::exception 
		{
			public:
				InvalidFormNameError( std::string _fname );
				virtual ~InvalidFormNameError() throw();
				virtual const char* what() const throw();
				std::string _form;

			private:
				std::string _fname;
		};
};

#endif