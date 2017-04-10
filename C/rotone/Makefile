##
## Makefile for makefile in /home/exam/rendu/task02
## 
## Made by exam user
## Login   <exam@epitech.net>
## 
## Started on  Sat Feb 25 09:10:26 2017 exam user
## Last update Sat Feb 25 09:12:08 2017 exam user
##

NAME=	a.out

SRC=	main.c

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
