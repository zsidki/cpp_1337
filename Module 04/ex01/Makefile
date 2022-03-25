.PHONY: all fclean clean re
CC = c++
flags = -Wall -Wextra -Werror #-fsanitize=address
SRCS  =  main.cpp  Animal.cpp Cat.cpp Dog.cpp

NAME  =  Animal

all: $(NAME)

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
