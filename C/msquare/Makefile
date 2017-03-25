##
## Makefile for makefile in /home/guillaume/GitHub/exam/C/msquare/
##
## Made by Guillaume Roux
## Login   <guillaume2.roux@epitech.eu>
##
## Started on  Fri Mar 17 09:19:26 2017 Guillaume Roux
## Last update Fri Mar 24 20:16:14 2017 Guillaume Roux
##

NAME=	msquare

SRC=	my_msquare.c \
			main.c \
			square.c \
			list.c

OBJ=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
					gcc -o $(NAME) $(OBJ) -Wall -Werror -Wextra

clean:
					rm -f $(OBJ)

fclean:		clean
					rm -f $(NAME)

re:				fclean all

.PHONY:		all clean fclean re
