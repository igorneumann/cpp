/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:25:20 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/03 19:17:24 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

#include <iostream>
#include <stdlib.h>
#include <cstring>

class Base
{
	public:
		virtual ~Base( void );
};

class A : public Base::Base
{
};

class B : public Base::Base
{
};

class C : public Base::Base
{
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif