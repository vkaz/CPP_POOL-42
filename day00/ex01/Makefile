# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 13:49:23 by vkaznodi          #+#    #+#              #
#    Updated: 2019/04/01 13:49:25 by vkaznodi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOC=\033[0m
GRE=\033[32m
RED=\033[31m
YELL=\033[33m

NAME     := phonebook
SRCS     := phonebook.cpp Contact.class.cpp
HEADER   := Contact.class.hpp

OBJS     := $(SRCS:.cpp=.o)

CLANG      := clang++
CLANGFLAGS := -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@$(CLANG) $(OBJS) -o $@
	@echo "$(GRE)$(NAME) READY$(GRE)"

%.o: %.cpp
	@$(CLANG) $(CLANGFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJS)
	@echo "$(RED)Removing OBJ : ./obj$(RED)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Removing $(NAME) executables$(YELL)"

re:     fclean all

.PHONY: all clean fclean format re
