/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/19 19:15:53 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
		std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level )
{
	int pos = 0;

	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (pos < 4 && level.compare(options[pos])!= 0)
		pos++;
	void (Karen::*comp)(void);
	switch(pos)
	{
		case 0:
			comp = &Karen::debug;
			break;
		case 1:
			comp = &Karen::info;
			break;
		case 2:
			comp = &Karen::warning;
			break;
		case 3:
			comp = &Karen::error;
			break;
	}
	if (!comp)
		std::cout << level << ": Wrong argument" << std::endl;
	else
		(this->*comp)();
}

Karen::Karen()
{
}

Karen::~Karen( void )
{
}