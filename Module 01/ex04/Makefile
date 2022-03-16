.PHONY: all fclean clean re
CC = c++
flags = -Wall -Wextra -Werror #-fsanitize=address
SRCS  =  main.cpp

NAME  = replace
NAME_file  = *.replace

all: $(NAME)

$(NAME): ${SRCS}
	@$(CC) $(flags) $(SRCS) -o $(NAME) 

clean:
	@rm -rf $(NAME)
	@rm -rf $(NAME_file)

fclean: clean

re: fclean all

push:
	@git add .
	@git commit -m "$(m)"
	@git push -f origin master
