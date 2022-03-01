/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:11:23 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/01 17:01:49 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string const & name, short int grade ) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException(name, grade);
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException(name, grade);
	else
		this->grade = grade;
	std::cout << "Bureaucrat " << name << " grade " << grade << " was created" << std::endl;
}

Bureaucrat::~Bureaucrat ( void )
{
	std::cout << "Bureaucrat " << this->name << " grade " << this->getGrade() << " was deleted" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat) : name(Bureaucrat.name)
{
	*this = Bureaucrat;
	std::cout << "Bureaucrat " << this->name << " grade " << this->grade << " was copied" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &Bureaucrat)
{
	if (this != &Bureaucrat)
	{
		std::cout << "Copying Bureaucrat" << Bureaucrat.getName() << " grade " << Bureaucrat.grade << std::endl;
		if (Bureaucrat.getGrade() > 150)
			throw Bureaucrat::GradeTooHighException(Bureaucrat.getName(), Bureaucrat.getGrade());
		else if (Bureaucrat.getGrade() < 1)
			throw Bureaucrat::GradeTooHighException(Bureaucrat.getName(), Bureaucrat.getGrade());
		else
			this->grade = Bureaucrat.grade;
	}
	return (*this);
}

void Bureaucrat::operator += (short int const i)
{
	std::cout << "Increasing rank by " << i << std::endl;
	if ((this->grade - i) < 1)
		throw Bureaucrat::GradeTooHighException(this->name, (this->grade - i));
	else
		this->grade -= i;
}

void Bureaucrat::operator -= (short int const i)
{
	std::cout << "Decreasing rank by " << i << std::endl;
	if ((this->grade + i) > 150)
		throw Bureaucrat::GradeTooLowException(this->name, (this->grade + i));
	else
		this->grade += i;
}

std::string	const & Bureaucrat::getName() const
{
		return this->name;
}

short int const & Bureaucrat::getGrade() const
{
		return this->grade;
}

bool Bureaucrat::signForm(Form &Form) 
{
	if (Form.getSign())
		std::cout << this->name << " cannot sign " << Form.getName() << ", already signed" << std::endl;
	else if (this->grade < Form.getgtosign())
	{
		std::cout << this->name << " signs " << Form.getName() << std::endl;
		return Form.beSigned(*this);
	}
	else
	{
		std::cout << this->name << " cannot sign " << Form.getName() << ", grade is too low" << std::endl;
	}

	return 0;
}

std::ostream & operator << ( std::ostream &out, const Bureaucrat &Bureaucrat )
{
	out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << "." << std::endl;
	return out;
}