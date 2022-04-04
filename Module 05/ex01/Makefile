.PHONY: all fclean clean re
CC = c++
flags = -g -Wall -Wextra -Werror #-fsanitize=address 
SRCS  =  main.cpp  Bureaucrat.cpp Form.cpp

NAME  = Bureaucrat

DSYM = Bureaucrat.dsym

all: $(NAME)

$(NAME): ${SRCS}
	@$(CC) $(flags) $(SRCS) -o $(NAME) 

clean:
	@rm -rf $(NAME) $(DSYM)

fclean: clean

re: fclean all

push:
	@git add .
	@git commit -m "$(m)"
	@git push -f origin master
