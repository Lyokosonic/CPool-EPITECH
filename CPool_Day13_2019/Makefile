##
## EPITECH PROJECT, 2019
## libbtree
## File description:
## libbtree
##

NAME	=	libbtree.a

SRC	=	btree_create_node.c \
		btree_apply_prefix.c \

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

re:		fclean all

.PHONY:		all clean fclean re
