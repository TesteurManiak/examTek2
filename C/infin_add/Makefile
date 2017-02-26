##
## Makefile for makefile in /home/exam/rendu/task03
## 
## Made by exam user
## Login   <exam@epitech.net>
## 
## Started on  Sat Feb 25 09:20:57 2017 exam user
## Last update Sat Feb 25 10:38:26 2017 exam user
##

NAME=	infin_add

SRC=	main.c \
	infin_add.c \
	number.c \
	infin_sub.c

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
