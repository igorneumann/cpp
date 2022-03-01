/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:30:04 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/25 18:05:42 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & tgt ) : Form("ShrubberyCreation", 145, 137), tgt(tgt)
{
	std::cout << "ShrubberyCreation targeting " << this->tgt << " was created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &ShrubberyCreationForm ) : Form("ShrubberyCreation", 145, 137), tgt(ShrubberyCreationForm.tgt)
{
	std::cout << "ShrubberyCreation targeting " << this->tgt << " was copied" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreation targeting " << this->tgt << " was deleted" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = ( const ShrubberyCreationForm &ShrubberyCreationForm )
{
	(void) ShrubberyCreationForm;
	std::cout << "Copying ShrubberyCreation targeting " << this->tgt << std::endl;
	return (*this);
}

std::string const & ShrubberyCreationForm::getTgt(void) const { return this->tgt; }

bool ShrubberyCreationForm::doMagic( std::string const & tgt ) const 
{ 
	std::string str = tgt + "_shrubbery";

	std::ofstream outfile (str);

	outfile << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\nejm97  }|{\n" << std::endl;
	outfile.close();

	return 1;
}