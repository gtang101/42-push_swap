NAME = push_swap
BONUS = checker
OS = $(shell uname)
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
LIB = libft/libft.a
BONUS_LIB = gnl/get_next_line.h
MAIN = src/main.c
SRCS = main.c \
		src/check_input.c \
		src/ft_atoli.c \
		src/swap.c \
		src/push.c \
		src/rotate.c \
		src/reverse_rotate.c \
		src/do_op.c \
		src/utils.c \
		src/data_set.c \
		src/sort_radix.c

BONUS_SRCS = gnl/get_next_line.c \
				gnl/get_next_line_utils.c \
				bonus/checker.c \
				src/check_input.c \
				src/ft_atoli.c \
				src/swap.c \
				src/push.c \
				src/rotate.c \
				src/reverse_rotate.c \
				src/do_op.c \
				src/utils.c \
				src/data_set.c \
				src/sort_radix.c

OBJS = *.o

ifeq ($(OS),Linux)
CHECKER = ./push_swap $(ARG) | ./checker_linux $(ARG)
else
CHECKER = ./push_swap $(ARG) | ./checker_Mac $(ARG)
endif

all: $(NAME)

$(NAME): $(OBJS)
	@make -C libft
	$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

bonus: $(BONUS)

$(BONUS):
	$(CC) $(CFLAGS) $(BONUS_SRCS) $(LIB) -o $(BONUS)

clean:
	@make fclean -C libft
	rm -rf $(OBJS)
	rm -rf $(NAME)
	rm -rf $(BONUS)
	@clear

fclean: clean

re: fclean all
	@clear

git: clean
	git add .
	git commit
	git push

test2:	re
		$(eval ARG = $(shell shuf -i 0-100 -n 2))
		@echo "Checker result: "
		$(CHECKER)
		@echo "Instructions count: "
		@./push_swap $(ARG) | wc -l
		@./push_swap $(ARG) 

test3:	re
		$(eval ARG = $(shell shuf -i 0-100 -n 3))
		@echo "Checker result: "
		$(CHECKER)
		@echo "Instructions count: "
		@./push_swap $(ARG) | wc -l
		@./push_swap $(ARG)

test5:	re
		$(eval ARG = $(shell shuf -i 0-100 -n 5))
		@echo "Checker result: "
		$(CHECKER)
		@echo "Instructions count: "
		@./push_swap $(ARG) | wc -l
		@./push_swap $(ARG)

test100:	re
		$(eval ARG = $(shell shuf -i 0-10000 -n 100))
		@echo "Checker result: "
		$(CHECKER)
		@echo "Instructions count: "
		@./push_swap $(ARG) | wc -l

test500:	re
		$(eval ARG = $(shell shuf -i 0-10000 -n 500))
		@echo "Checker result: "
		$(CHECKER)
		@echo "Instructions count: "
		@./push_swap $(ARG) | wc -l

checker_test:	re bonus
		$(eval ARG = $(shell shuf -i 0-10000 -n 500))
		@echo "Checker result: "
		./push_swap $(ARG) | ./checker $(ARG)
		@echo "Instructions count: "
		@./push_swap $(ARG) | wc -l