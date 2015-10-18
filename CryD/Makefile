CC	= gcc

RM	= rm -f

SRC	= main.c \
	./lib/misc.c \

OBJ	= $(SRC:.c=.o)

NAME	= cryd

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean re all
