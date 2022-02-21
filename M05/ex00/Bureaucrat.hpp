/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:11:31 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/21 19:48:28 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <stdlib.h>

class Bureaucrat
{
	public:
		Bureaucrat( std::string const & name, int grade );
		Bureaucrat( const Bureaucrat &Bureaucrat );
		virtual ~Bureaucrat( void );
		Bureaucrat & operator = ( const Bureaucrat &Bureaucrat );
		Bureaucrat & operator -= ( int const i );
		Bureaucrat & operator += ( int const i );
		std::string	const & getName(void) const;
		short int			const & getGrade(void) const;

    class GradeTooHighException : public std::exception 
		{
			public:
				GradeTooHighException(std::string name, int grade);
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
				std::string _name;
				short int _grade;
		};

    class GradeTooLowException : public std::exception 
		{
			public:
				GradeTooLowException(std::string name, int grade);
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
				std::string _name;
				short int _grade;
		};

	private:
		std::string const	name;
		short int			grade;

};

#endif