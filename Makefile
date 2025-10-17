# Makefile

NAME = tictactoe

SRCS = main.c \
	grid.c \
	win.c \
	robot.c \
	tic-tac-toe.c \

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

