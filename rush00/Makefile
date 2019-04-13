.PHONY: all re clean fclean

CC=clang++
FLAGS=-Wextra -Wall -Werror -std=c++98
LIBS=-lncurses
NAME=ft_retro
SRCS=Bullet.cpp Character.cpp Enemies.cpp main.cpp SpaceObject.cpp Window.cpp Boss.cpp
OBJS=$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(LIBS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
