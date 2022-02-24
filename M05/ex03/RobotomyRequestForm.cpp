/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:29:57 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/24 17:21:47 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string const & tgt ) : Form("RobotomyRequest", 72, 45), tgt(tgt)
{
	std::cout << "RobotomyRequest targeting " << this->tgt << " was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &RobotomyRequestForm )  : Form("RobotomyRequestForm", 72, 45), tgt(RobotomyRequestForm.tgt)
{
	std::cout << "RobotomyRequest targeting " << this->tgt << " was copied" << std::endl;
	*this = RobotomyRequestForm;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "RobotomyRequest targeting " << this->tgt << " was deleted" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = ( const RobotomyRequestForm &RobotomyRequestForm )
{
	(void) RobotomyRequestForm;
	std::cout << "Copying RobotomyRequest targeting " << this->tgt << std::endl;
	return (*this);
}

std::string const & RobotomyRequestForm::getTgt(void) const { return this->tgt; }

bool RobotomyRequestForm::doMagic( std::string const & tgt ) const 
{ 
		if (std::rand() %2 == 0)
		{
			std::cout << tgt << " has been robotomized successfully" << std::endl;
			return 1;
		}
		std::cout << "Failed to robotomize " << tgt << std::endl;
		return 0;
}