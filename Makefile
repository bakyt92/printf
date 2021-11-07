NAME = libftprintf.a

SRC = ft_printf.c ft_func1.c ft_func2.c

HEADER = libftprintf.h

OBJ = $(SRC:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror $(HEADER)

.PHONY : all clean fclean re 

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	gcc $(CFLAGS) -c $< -o $@
	echo "DONE CORRECTLY"

clean : 
	rm -f $(OBG)

fclean: clean
	rm $(NAME)

re : fclean all
