NAME = pushswap
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
LIB = libft/libft.a
SRCS = test.c

all: $(NAME)

$(NAME):
	@make -C libftprintf	
	$(CC) $(CFLAGS) $(INC) $(SRCS) -o $(NAME)

clean:
	@make fclean -C libftprintf
	rm -rf $(NAME)

fclean: clean

re: fclean all
