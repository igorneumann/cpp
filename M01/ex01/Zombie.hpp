/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:21:11 by igorneumann       #+#    #+#             */
/*   Updated: 2022/01/11 18:47:47 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <stdlib.h>
#include <string>

class Zombie
{
	public:
	Zombie(void);
	~Zombie(void);
	void announce( void );
	void setname( std::string name );

	private:
	std::string	_name;
};

/*
*** main.cpp
*/
int	main(int argc, char **argv);

/*
*** Zombie.cpp
*/
std::string announce( void );

/*
*** ZombieHorde.cpp
*/
Zombie* zombieHorde( int N, std::string name );

#endif