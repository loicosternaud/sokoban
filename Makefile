##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## BSQ
##

SRC =	map.c \
	trouve.c \
	collision.c \
	box.c \
	main.c \

OBJ	=	$(SRC:.c=.o)

NAME =	my_sokoban

all :	$(NAME)

$(NAME)	:	$(OBJ)
	gcc $(SRC) -o $(NAME) -lncurses

clean :
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
