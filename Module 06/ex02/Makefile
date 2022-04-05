.PHONY: all fclean clean re
CC = c++
flags = -g -Wall -Wextra -Werror #-fsanitize=address
SRCS  =  main.cpp A.cpp B.cpp C.cpp Base.cpp

NAME  = dynamic_cast
dsym = $(NAME).dSYM

all: $(NAME)

$(NAME): ${SRCS}
	@$(CC) $(flags) $(SRCS) -o $(NAME) 

clean:
	@rm -rf $(NAME) $(dsym)
fclean: clean

re: fclean all

push:
	@git add .
	@git commit -m "$(m)"
	@git push -f origin master
