/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:21:11 by igorneumann       #+#    #+#             */
/*   Updated: 2021/12/21 18:59:03 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Zombie
{
	public:
	Zombie(string name);
	~Zombie(void);
	void announce( void );

	private:
	string	_name;
};

/*
*** main.cpp
*/
int	main(void);

/*
*** Zombie.cpp
*/
string announce( void );

/*
*** newZombie.cpp
*/
Zombie* newZombie( string name );

/*
*** randomChump.cpp
*/
void randomChump( string name );

#endif