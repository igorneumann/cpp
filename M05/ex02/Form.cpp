/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:56:31 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/23 19:50:39 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string const & name, short int gtosign, short int gtorun ) : _name(name), _gtosign(gtosign), _gtorun(gtorun)
{
	std::cout << "Form " << this->_name << " was created" << std::endl;
}

Form::Form( const Form &Form ) : _name(Form._name), _gtosign(Form._gtosign), _gtorun(Form._gtorun)
{
	std::cout << "Form " << this->_name << " was copied" << std::endl;
	*this = Form;
}

Form::~Form( void )
{
	std::cout << "Form " << this->_name << " was deleted" << std::endl;
}

Form & Form::operator = ( const Form &Form )
{
	std::cout << "Copying Form " << this->_name << std::endl;
	this->_signed = Form.getSign();
	return (*this);
}

bool Form::getSign(void) const { return this->_signed; }

std::string const & Form::getName(void) const { return this->_name; }

short int const & Form::getgtosign(void) const { return this->_gtosign; }

short int const & Form::getgtorun(void) const { return this->_gtorun; }

bool Form::beSigned(const Bureaucrat &Bureaucrat) 
{
	if (Bureaucrat.getGrade() < this->_gtosign)
	{
		this->_signed = 1;
	}
	else
	{
		throw Form::GradeTooLowException();
	}

	return this->_signed;
}

bool Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() < this->_gtorun)
	{
		if (this->_signed)
			return this->doMagic(this->getTgt());
		else
			throw Form::NotSignedException();
		return 0;
	}
	throw Form::GradeTooLowException();
	return 0;
}

Form::GradeTooHighException::GradeTooHighException () { }

Form::GradeTooHighException::~GradeTooHighException(void) throw () { }

const char *Form::GradeTooHighException::what() const throw () { return " grade is too high"; }

Form::GradeTooLowException::GradeTooLowException() { }

Form::GradeTooLowException::~GradeTooLowException(void) throw () { }

const char *Form::GradeTooLowException::what() const throw () {	return " grade is too low"; }

std::ostream & operator << ( std::ostream &out, const Form &form )
{
	out << "Form " << form.getName() << ", needs " << form.getgtosign() << " grade to be signed and " << form.getgtorun() << " grade to run." <<  std::endl;
	return out;
}

Form::NotSignedException::NotSignedException () { }

Form::NotSignedException::~NotSignedException(void) throw () { }

const char *Form::NotSignedException::what() const throw () { return " form is not signed"; }