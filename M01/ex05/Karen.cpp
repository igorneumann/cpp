/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/18 20:00:30 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void complain( std::string level )
{
	int pos;

	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (options[pos] && level.compare(options[pos])!= 0)
		pos++;
	void (*comp)(void);
	switch(pos)
	{
		case 0:
			comp = this->debug();
			break;
		case 1:
			comp = this->info();
			break;
		case 2:
			comp = this->warning();
			break;
		case 3:
			comp = this->error();
			break;
	}
	if (!comp)
		std::cout << level << ": Wrong argument" << std::endl;
	else
		comp();
}

void debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void warning( void )
{
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void error( void )
{
		std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}