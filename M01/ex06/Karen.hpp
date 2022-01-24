/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:20 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/19 20:21:17 by ineumann         ###   ########.fr       */
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
	Karen();
	~Karen();
	void complain( std::string level );
	void (Karen::*comp)(void);

	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif