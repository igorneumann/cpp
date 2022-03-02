/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:53:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/02 18:28:43 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern was created" << std::endl;
}

Intern::Intern( const Intern &Intern )
{
	std::cout << "Intern was copied" << std::endl;
	*this = Intern;
}

Intern::~Intern( void )
{
	std::cout << "Intern was deleted" << std::endl;
}

Intern & Intern::operator = ( const Intern &Intern )
{
	(void) Intern;
	std::cout << "Copying Intern" << std::endl;
	return (*this);
}

Form *Intern::CreateShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::CreateRobotomyForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::CreatePresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm( std::string const & name,  std::string const & target )
{
	int pos = 0;

	std::string Targets[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(Intern::*aforms[3])(const std::string &target) = {&Intern::CreatePresidentialPardonForm, &Intern::CreateRobotomyForm, &Intern::CreateShrubberyCreationForm};
		for (pos = 0; name.compare(Targets[pos]) != 0; pos++)
		{
			if (pos == 3)
			{
				throw InvalidFormNameError(name);
				return (0);
			}
		}
	return (this->*aforms[pos])(target);
}

Intern::InvalidFormNameError::InvalidFormNameError ( std::string _fname ) 
{ 
	this->_fname = _fname;
}

Intern::InvalidFormNameError::~InvalidFormNameError(void) throw () { }

const char *Intern::InvalidFormNameError::what() const throw () 
{
	std::string msg = "Function Unknown: " + this->_fname;
	const char* data = msg.data();
	return data;
}