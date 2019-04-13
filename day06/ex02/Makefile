NOC=\033[0m
GRE=\033[32m
RED=\033[31m
YELL=\033[33m

NAME     := Serialization
SRCS     := main.cpp A.cpp B.cpp C.cpp Base.cpp
HEADER   := A.hpp B.hpp C.hpp Base.hpp

OBJS     := $(SRCS:.cpp=.o)

CLANG      := clang++
CLANGFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@$(CLANG) $(OBJS) -o $@
	@echo "$(GRE)$(NAME) READY$(GRE)"

%.o: %.cpp
	@$(CLANG) $(CLANGFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJS)
	@echo "$(RED)Removing OBJ : ./obj$(RED)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Removing $(NAME) executables$(RED)"

re:     fclean all

.PHONY: all clean fclean format re