/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:14:57 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/28 19:35:32 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkers.hpp"

void	Checker::returnfloat()
{

	double d = std::atof((char*)&this->_cont[0]);

	if (isprint((int)d))
		std::cout << "char: \"" << (char)d << "\""  << std::endl;
	else 
			std::cout << "char: impossible"  << std::endl;
	std::cout << "int: " << (int)d << std::endl;
	std::cout << "float: " << d << ".0f" << std::endl;
	std::cout << "double: " << (double)d << ".0" << std::endl;
}

void	Checker::returndouble()
{
	float d = std::atof((char*)&this->_cont[0]);

	if (isprint((int)d))
		std::cout << "char: \"" << (char)d << "\""  << std::endl;
	else 
			std::cout << "char: impossible"  << std::endl;
	std::cout << "int: " << (int)d << std::endl;
	std::cout << "float: " << d << "f" << std::endl;
	std::cout << "double: " << (double)d << std::endl;
}

void	Checker::returnint()
{
	char c = (char)this->_cont[0];
	int i = atoi(&c);

	if (isprint(c))
		std::cout << "char: \"" << c << "\""  << std::endl;
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