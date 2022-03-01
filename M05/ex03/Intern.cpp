/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:53:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/01 19:36:20 by ineumann         ###   ########.fr       */
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

std::string convert(std::string s)
{
	int n = s.length();
	std::string out;
	char tmp;

	for (int i = 0; i < n; i++) 
	{
		if (s[i] != ' ')
			tmp = s[i];
		else
		{
			i++;
			tmp = toupper(s[i]);
		}
		out = out + tmp;
	}
	tmp = toupper(s[0]);
	out[0] = tmp;
	return out;
}

Form *Intern::makeForm( std::string const & name,  std::string const & target )
{
	std::string tmp;
	tmp = convert(name);
	Form* out = NULL;
	int pos = 0;

	std::string options[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	while (pos < 3 && tmp.compare(options[pos])!= 0)
		pos++;
	switch(pos)
	{
		case 0:
			out = new PresidentialPardonForm(target);
			return out;
		case 1:
			out = new RobotomyRequestForm(target);
			return out;
		case 2:
			out = new ShrubberyCreationForm(target);
			return out;
	}
	std::cout << name << ": form type not known, options are:\n- Presidential Pardon\n- Roboto my Request\n- Shrubbery Creation\n" << std::endl;
	return out;
}