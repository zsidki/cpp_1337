
.PHONY: all fclean clean re
CC = clang++
flags =   -Wall -Wextra -Werror #-g -fsanitize=address
SRCS =  megaphone.cpp

NAME  = megaphone

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