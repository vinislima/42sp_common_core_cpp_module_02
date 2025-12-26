# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/22 22:56:56 by vinda-si          #+#    #+#              #
#    Updated: 2025/12/25 22:54:12 by vinda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fixed
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC			= main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJ			= $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
