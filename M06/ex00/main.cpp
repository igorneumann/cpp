/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:37:36 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/25 20:07:52 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <cctype>
#include "checkers.hpp"


int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int size = strlen(argv[1]);

		class Checker cont(argv[1], size);
		if (cont.run())
			return (0);
		else
			std::cout << argv[1] << " has unknown type " << std::endl;
		return (1);
	}
	std::cout << "ONE and just ONE argument is needed to run" << std::endl;
	return (1);
}