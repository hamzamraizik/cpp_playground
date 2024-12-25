cc=cc
FLAGS=-Wall -Wextra -Werror -std=c++98
src=Main.cpp
obj=$(src:.cpp=.o)
NAME=main

all: $(NAME)
    $(cc) $(FLAGS) $(obj) -o $(NAME)

obj: $(src)
    $(cc) $(FLAGS) -c $< -o $@

clean:
    rm -f $(obj)

fclean: clean
    rm -f $(NAME)