# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruben <ruben@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/24 00:59:57 by ruben             #+#    #+#              #
#    Updated: 2026/03/24 01:49:56 by ruben            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = 	Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp 

C++ = c++
CFLAGS = -Werror -Wextra -Wall -std=c++98

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