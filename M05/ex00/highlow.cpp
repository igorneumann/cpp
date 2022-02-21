/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highlow.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:11:23 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/21 19:53:59 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException ( std::string name, int grade ) 
{ 
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw () { }

const char *Bureaucrat::GradeTooHighException::what() const throw ()
{
	std::string msg = "Can't increase, " + this->_name + "'s grade is too low: " + std::to_string(this->_grade);
	const char* data = msg.data();
	throw data;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( std::string name, int grade )
{ 
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw () { }

const char *Bureaucrat::GradeTooLowException::what() const throw ()
{
	std::string msg = "Can't decrease, " + this->_name + "'s grade is too low: " + std::to_string(this->_grade);
	const char* data = msg.data();
	throw data;
}

std::string	const & Bureaucrat::getName() const
{
		return this->name;
}

short int	const & Bureaucrat::getGrade() const
{
		return this->grade;
}