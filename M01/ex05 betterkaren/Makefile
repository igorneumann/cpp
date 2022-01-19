# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 18:47:15 by ineumann          #+#    #+#              #
#    Updated: 2022/01/19 18:11:26 by ineumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	karen
SRCS			=	main.cpp Karen.cpp
OBJS			=	$(SRCS:.cpp=.o)
CC				=	@g++ -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re