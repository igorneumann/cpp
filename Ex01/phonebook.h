/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:56:56 by ineumann          #+#    #+#             */
/*   Updated: 2021/10/29 18:39:24 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>

typedef struct s_data
{
	struct s_data	*prev;
	struct s_data	*next;
	int				i;
}					t_data;

typedef struct s_main
{
	t_data			*data;
	int				i;
}			t_main;

/*
*** phonebook.c
*/

int					main ();
void 				ft_search (t_data	*data);
void				ft_add (t_data	*data);

#endif