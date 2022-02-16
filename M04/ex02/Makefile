# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 20:19:58 by ineumann          #+#    #+#              #
#    Updated: 2022/02/15 08:04:12 by igorneumann      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	zoo
SRCS			=	main.cpp Dog.cpp Cat.cpp Brain.cpp Animals.cpp
OBJS			=	$(SRCS:.cpp=.o)
CC				=	@g++ -g -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re