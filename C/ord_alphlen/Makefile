##
## Makefile for makefile in /home/exam/rendu/task04
##
## Made by exam user
## Login   <exam@epitech.net>
##
## Started on  Sat Feb 25 11:22:43 2017 exam user
## Last update Mon Feb 27 03:07:35 2017 Guillaume Roux
##

NAME=	ord_alphlen

SRC=	main.c \
	ord_alphlen.c \
	my_str_to_wordtab.c

OBJ=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -std=c99

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
