NAME = libft.a

SRC  = *.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -I .
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
