/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:14:16 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/03 19:13:42 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKERS_H
# define CHECKERS_H

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cctype>

class Checker
{
	public:
		Checker(std::string _cont, int _size);
		Checker (const Checker &Checker);
		virtual ~Checker(void);
		Checker & operator = (const Checker &Checker);
		int		fixedcheck();
		int		check();
		bool 	run();
		void	returnfloat();
		void	returndouble();
		void	returnint();
		void	returnchar();
		void	returninf();
		void	returnnan();

	private:
		std::string	_cont;
		int			_size;
};

#endif