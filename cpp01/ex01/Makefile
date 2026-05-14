# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruben <ruben@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/24 01:58:37 by ruben             #+#    #+#              #
#    Updated: 2026/03/24 02:00:09 by ruben            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

SRCS = 	Zombie.cpp \
		zombieHorde.cpp \
		main.cpp 

CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	@$(C++) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) compiled ✅"

%.o: %.cpp
	@$(C++) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@echo "clean done 🧹"

fclean: clean
	@rm -rf $(NAME)
	@echo "fclean done 🗑️"

re: fclean all

.PHONY: all clean fclean re
