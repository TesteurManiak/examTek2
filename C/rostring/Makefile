##
## Makefile for makefile in /home/exam/rendu/union
## 
## Made by exam user
## Login   <exam@epitech.net>
## 
## Started on  Mon Apr 24 14:33:31 2017 exam user
## Last update Mon Apr 24 14:48:55 2017 exam user
##

NAME=	rostring

SRC=	main.c

OBJ=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -W -Werror -Wextra -std=gnu90

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
