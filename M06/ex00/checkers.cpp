/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:14:52 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/03 19:04:45 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkers.hpp"

Checker::Checker ( std::string _cont, int _size )
{
	this->_cont = _cont;
	this->_size = _size;
	std::cout << "Checker created" << std::endl;
}

Checker::~Checker ( void )
{
	std::cout << "Checker destroyed" << std::endl;
}

Checker::Checker(const Checker &Checker)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Checker;
}

Checker & Checker::operator = (const Checker &Checker)
{
	if (this != &Checker)
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->_cont = Checker._cont;
		this->_size = Checker._size;
	}
	return (*this);
}

int		Checker::fixedcheck()
{
	std::cout << "String is: " << this->_cont << std::endl;
	if ( this->_cont == "-inff" || this->_cont == "+inff" || this->_cont == "-inf" || this->_cont == "+inf" )
		return (5);
	else if ( this->_cont == "nanf" || this->_cont == "nan" )
		return (6);
	return (check());
}

int		Checker::check()
{
	int dot = 0;
	int f = 0;
	int letter = 0;
	int number = 0;

	for (int i = 0; i < this->_size; i++)
	{
		if (!isprint(this->_cont[i]))
			return (4);
		else if (this->_cont[i] == '.')
			dot++;
		else if (this->_cont[i] == 'f')
			f++;
		else if (!isdigit(this->_cont[i]) && this->_cont[i] != 45)
			letter++;
		else if (isdigit(this->_cont[i]))
			number++;
	}
	if (dot == 1 && f == 1 && letter == 0 && number > 0)
		return (0);
	else if (dot == 1 && f == 0 && letter == 0 && number > 0)
		return (1);
	else if (dot == 0 && f == 0 && letter == 0 && number > 0)
		return (2);
	else
		return (3);
}

bool 	Checker::run()
{
	switch(fixedcheck())
	{
		case 0:
			std::cout << "Its a FLOAT" << std::endl;
			Checker::returnfloat();
			break;
		case 1:
			std::cout << "Its a DOUBLE" << std::endl;
			Checker::returndouble();
			break;
		case 2:
			std::cout << "Its a INT" << std::endl;
			Checker::returnint();
			break;
		case 3:
			std::cout << "Its a CHAR" << std::endl;
			Checker::returnchar();
			break;
		case 4:
			std::cout << "Invalid string" << std::endl;
			return 0;
		case 5:
			std::cout << "Its a INF" << std::endl;
			Checker::returninf();
			break;
		case 6:
			std::cout << "Its a NAN" << std::endl;
			Checker::returnnan();
			break;
	}
	return 1;
}