# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 08:23:57 by igorneumann       #+#    #+#              #
#    Updated: 2021/11/08 08:24:12 by igorneumann      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	zombie
SRCS			=	main.cpp Zombie.cpp Zombie.hpp newZombie.cpp randomChump.cpp
OBJS 			=	$(SRCS:.cpp=.o)
CC				=	@g++ -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
