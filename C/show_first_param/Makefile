##
## Makefile for makefile in /home/exam/rendu/show_first_param
## 
## Made by exam user
## Login   <exam@epitech.net>
## 
## Started on  Sat Apr  8 09:03:42 2017 exam user
## Last update Sat Apr  8 09:05:49 2017 exam user
##

NAME=		show_first_param

SRC=		main.c

OBJ=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC) -std=gnu90

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
