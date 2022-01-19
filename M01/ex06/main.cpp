/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:18 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/19 19:37:56 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	k;

	if (argc != 2)
	{
		std::cout << "Es necesario un solo argumento con el nivel de alerta \"DEBUG\", \"INFO\", \"WARNING\" o \"ERROR\"";
		return(1);
	}
	k = Karen();
	k.complain((std::string)argv[1]);

	return(0);
}