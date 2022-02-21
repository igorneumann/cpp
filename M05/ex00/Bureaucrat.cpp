/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:11:23 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/21 19:37:25 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string const & name, int grade ) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException(this->name, this->grade);
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException(this->name, this->grade);
	else
		this->grade = grade;
	std::cout << "Bureaucrat " << this->name << " grade " << grade << " was created" << std::endl;
}

Bureaucrat::~Bureaucrat ( void )
{
	std::cout << "Bureaucrat " << this->name << " grade " << this->getGrade() << " was deleted" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat)
{
	std::cout << "Bureaucrat " << this->name << " grade " << this->getGrade() << " was copied" << std::endl;
	*this = Bureaucrat;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &Bureaucrat)
{
	if (this != &Bureaucrat)
	{
		std::cout << "Copying Bureaucrat" << Bureaucrat.getName() << " grade " << Bureaucrat.getGrade() << std::endl;
		if (Bureaucrat.getGrade() > 150)
			throw Bureaucrat::GradeTooHighException(Bureaucrat.getName(), Bureaucrat.getGrade());
		else if (Bureaucrat.getGrade() < 1)
			throw Bureaucrat::GradeTooHighException(Bureaucrat.getName(), Bureaucrat.getGrade());
		else
			this->grade = Bureaucrat.getGrade();
	}
	return (*this);
}

Bureaucrat & Bureaucrat::operator += (int const i)
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException(this->name, this->grade);
	else
		this->grade -= i;
	return (*this);
}

Bureaucrat & Bureaucrat::operator -= (int const i)
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException(this->name, this->grade);
	else
		this->grade += i;
	return (*this);
}

std::string	const & Bureaucrat::getName() const
{
		return this->name;
}

short int	const & Bureaucrat::getGrade() const
{
		return this->grade;
}