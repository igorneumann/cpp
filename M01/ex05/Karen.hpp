/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:20 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/18 19:39:19 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <stdlib.h>
#include <string>

class Karen
{
	public:
	Karen(void);
	~Karen(void);
	void complain( std::string level );

	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

/*
*** main.cpp
*/

/*
*** Karen.cpp
*/

#endif