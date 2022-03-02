/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:14:57 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/02 19:39:24 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkers.hpp"

void	Checker::returnfloat()
{
	float d = std::atof((char*)&this->_cont[0]);
	int i = d;
	float rest = d - i;


	if (isprint((int)d))
		std::cout << "char: \"" << (char)d << "\""  << std::endl;
	else 
			std::cout << "char: impossible"  << std::endl;
	std::cout << "int: " << (int)d << std::endl;
	std::cout << "float: " << d << "f" << std::endl;
	std::cout << "double: " << (double)d << "" << std::endl;
	if (rest == 0)
	{
		std::cout << "float: " << d << ".0f" << std::endl;
		std::cout << "double: " << (double)d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << d << "f" << std::endl;
		std::cout << "double: " << (double)d << std::endl;
	}
}

void	Checker::returndouble()
{
	double d = std::strtod((char*)&this->_cont[0], NULL);
	int i = d;
	double rest = d - i;

	if (isprint((int)d))
		std::cout << "char: \"" << (char)d << "\""  << std::endl;
	else 
			std::cout << "char: impossible"  << std::endl;
	std::cout << "int: " << (int)d << std::endl;
	if (rest == 0)
	{
		std::cout << "float: " << (float)d << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << (float)d << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void	Checker::returnint()
{
	int i = atoi((char*)&this->_cont[0]);

	if (isprint(i))
		std::cout << "char: \"" << (char)i << "\""  << std::endl;
	else 
			std::cout << "char: impossible"  << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << (float)i << ".0f" << std::endl;
	std::cout << "double: " << (double)i << ".0" <<  std::endl;
}

void	Checker::returnchar()
{
	char c = (char)this->_cont[0];

	std::cout << "char: \"" << c << "\"" << std::endl;
	std::cout << "int: " << (int)c << std::endl;
	std::cout << "float: " << (float)c << ".0f" <<  std::endl;
	std::cout << "double: " << (double)c << ".0" << std::endl;
}

void	Checker::returninf()
{
	char c = this->_cont[0];

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float:  " << c << "inff" <<  std::endl;
	std::cout << "double:  " << c << "inf" << std::endl;
}

void	Checker::returnnan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" <<  std::endl;
	std::cout << "double: nan" << std::endl;
}