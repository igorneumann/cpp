# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 20:19:58 by ineumann          #+#    #+#              #
#    Updated: 2022/01/19 20:20:13 by ineumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Fixed
SRCS			=	main.cpp Fixed.cpp
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