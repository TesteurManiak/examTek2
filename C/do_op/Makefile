##
## Makefile for makefile in /home/exam/rendu/task01
## 
## Made by exam user
## Login   <exam@epitech.net>
## 
## Started on  Sat Feb 25 08:34:25 2017 exam user
## Last update Sat Feb 25 08:57:08 2017 exam user
##

NAME=	do-op

SRC=	main.c \
	do-op.c

OBJ=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -W -Wall -Werror -Wextra

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
