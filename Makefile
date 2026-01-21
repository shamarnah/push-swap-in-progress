NAME = push_swap

SRC = push_swap.c ft_atol.c  validations.c 2sort5.c\
 push.c swap.c ru.c rd.c lists.c radix.c\

CC = cc

LIBRARY = push_swap.h
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
all : $(NAME)

$(NAME) : $(OBJ) $(LIBRARY)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	 rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : all re fclean clean