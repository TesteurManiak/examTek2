##
## Makefile for maekfile in /home/guillaume/GitHub/exam/C/g-diam/
##
## Made by Guillaume Roux
## Login   <guillaume2.roux@epitech.eu>
##
## Started on  Mon Feb 27 13:13:35 2017 Guillaume Roux
## Last update Mon Feb 27 13:16:37 2017 Guillaume Roux
##

NAME=			g-diam

SRC=			main.c

OBJ=			$(SRC:.c=.o)

all:			$(NAME)

$(NAME):	$(OBJ)
					gcc -o $(NAME) $(OBJ)

clean:
					rm -f $(OBJ)

fclean:		clean
					rm -f $(NAME)

re:				fclean all

.PHONY:		all clean fclean re
