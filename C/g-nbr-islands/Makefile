##
## Makefile for makefile in /home/exam/rendu/union
##
## Made by exam user
## Login   <exam@epitech.net>
##
## Started on  Sat Mar 25 08:32:26 2017 exam user
## Last update Sun Mar 26 15:33:32 2017 Guillaume Roux
##

NAME=	g-nbr-islands

SRC=	main.c

OBJ=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
