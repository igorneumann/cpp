/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:21:11 by igorneumann       #+#    #+#             */
/*   Updated: 2022/01/11 18:46:53 by ineumann         ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie(void);
	void announce( void );

	private:
	std::string	_name;
};

/*
*** main.cpp
*/
int	main(void);

/*
*** Zombie.cpp
*/
std::string announce( void );

/*
*** newZombie.cpp
*/
Zombie* newZombie(std::string name );

/*
*** randomChump.cpp
*/
void randomChump( std::string name );

#endif