# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 18:51:16 by ineumann          #+#    #+#              #
#    Updated: 2021/10/29 17:47:03 by ineumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PARAMS			=	Hola "que" tal
NAME			=	megaphone
SRCS			=	megaphone.cpp
OBJS 			=	$(SRCS:.cpp=.o)
CC				=	@g++ -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS) -o $(NAME)

run: re
	@./megaphone $(PARAMS)

clean:
	@rm -f $(OBJS)
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run
