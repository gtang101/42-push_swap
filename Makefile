NAME = pushswap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC = libftprintf/libft.a
SRCS = test.c

all: $(NAME)

$(NAME):
	@make -C libftprintf	
	$(CC) $(CFLAGS) $(INC) $(SRCS) -o $(NAME)

clean:

fclean: clean
	@make fclean -C libftprintf
	rm -rf $(NAME)

re: fclean all
