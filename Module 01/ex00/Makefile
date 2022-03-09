.PHONY: all fclean clean re
CC = c++
flags =   -Wall -Wextra -Werror
SRCS =  Zombie.cpp zombieHorde.cpp main.cpp

NAME  = zombie

all : $(NAME)

$(NAME): ${SRCS}
	@$(CC) $(flags) $(SRCS) -o $(NAME) 

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

push:
	@git add .
	@git commit -m "$(m)"
	@git push -f origin master