##
## EPITECH PROJECT, 2019
## 
## File description:
## 
##

NAME	=	rush2

SRC	=	rush2.c		\
		my_put_nbr.c	\
		main.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -g -g3

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(NAME)

fclean:		clean
		rm -f $(NAME) $(OBJ)
		rm -f *~
		rm -f include/*~
		rm -f lib/my/*~

re:		fclean all

.PHONY:		all clean fclean re
