/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:56:28 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/23 19:51:38 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form( std::string const & name, short int gtosign, short int gtorun );
		Form( const Form &Form );
		virtual ~Form( void );
		Form & operator = ( const Form &Form );
		bool getSign(void) const;
		std::string const & getName(void) const;
		short int const & getgtosign(void) const;
		short int const & getgtorun(void) const;
		virtual std::string const & getTgt(void) const = 0;
		bool beSigned(const Bureaucrat &Bureaucrat);
		bool execute(Bureaucrat const & executor) const;
		virtual bool doMagic( std::string const & tgt ) const = 0;

	class GradeTooHighException : public std::exception 
		{
			public:
				GradeTooHighException();
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
				std::string _name;
				short int _grade;
		};

	class GradeTooLowException : public std::exception 
		{
			public:
				GradeTooLowException();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
				std::string _name;
				short int _grade;
		};

	class NotSignedException : public std::exception 
		{
			public:
				NotSignedException();
				virtual ~NotSignedException() throw();
				virtual const char* what() const throw();
				std::string _form;
		};

	private:
		std::string const	_name;
		bool				_signed;
		short int const		_gtosign;
		short int const		_gtorun;

};

std::ostream & operator << ( std::ostream &out, const Form &form );

#endif