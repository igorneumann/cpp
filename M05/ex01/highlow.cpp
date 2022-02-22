/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highlow.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:11:23 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/22 17:48:45 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException ( std::string name, short int grade ) 
{ 
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw () { }

const char *Bureaucrat::GradeTooHighException::what() const throw ()
{
	std::string msg = "Can't increase, " + this->_name + "'s grade would be too low: " + std::to_string(this->_grade);
	const char* data = msg.data();
	return data;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( std::string name, short int grade )
{ 
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw () { }

const char *Bureaucrat::GradeTooLowException::what() const throw ()
{
	std::string msg = "Can't decrease, " + this->_name + "'s grade would be too low: " + std::to_string(this->_grade);
	const char* data = msg.data();
	return data;
}