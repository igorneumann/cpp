/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:29:50 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/23 20:01:30 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const & tgt ) : Form("PresidentialPardonForm", 25, 5), tgt(tgt)
{
	std::cout << "PresidentialPardonForm targeting " << this->tgt << " was created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &PresidentialPardonForm )  : Form("PresidentialPardonForm", 25, 5), tgt(PresidentialPardonForm.tgt)
{
	std::cout << "PresidentialPardonForm targeting " << this->tgt << " was copied" << std::endl;
	*this = PresidentialPardonForm;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "PresidentialPardonForm targeting " << this->tgt << " was deleted" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = ( const PresidentialPardonForm &PresidentialPardonForm )
{
	(void) PresidentialPardonForm;
	std::cout << "Copying PresidentialPardonForm targeting " << this->tgt << std::endl;
	return (*this);
}

std::string const & PresidentialPardonForm::getTgt(void) const { return this->tgt; }

bool PresidentialPardonForm::doMagic( std::string const & tgt ) const 
{
	std::cout << tgt << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return 1;
}