/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:11:31 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/22 17:42:54 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <stdlib.h>

class Bureaucrat
{
	public:
		Bureaucrat( std::string const & name, short int grade );
		Bureaucrat( const Bureaucrat &Bureaucrat );
		virtual ~Bureaucrat( void );
		Bureaucrat & operator = ( const Bureaucrat &Bureaucrat );
		void operator -= ( short int const i );
		void operator += ( short int const i );
		std::string	const & getName(void) const;
		short int	const & getGrade(void) const;


    class GradeTooHighException : public std::exception 
		{
			public:
				GradeTooHighException(std::string name, short int grade);
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
				std::string _name;
				short int _grade;
		};

    class GradeTooLowException : public std::exception 
		{
			public:
				GradeTooLowException(std::string name, short int grade);
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