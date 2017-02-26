/*
** my.h for my in /home/exam/rendu/task03
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 25 09:27:35 2017 exam user
** Last update Sat Feb 25 10:54:01 2017 exam user
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_num
{
  char*		num;
  int		size;
  int		neg;
}		t_num;

void	my_putchar(char c);
void	my_putstr(char *str);
char	*infin_add(t_num *nb1, t_num *nb2);
int	my_strlen(char *str);
void	init_num(t_num *nb, char *num);
int	get_size(char *num);
int	get_sign(char *num);
int	longest(int size1, int size2);
void	my_printer(char *str);
void	infin_sub(char *result, t_num *nb1, t_num *nb2);
void	copy_in(char *result, t_num *nb);
int	the_great(t_num *nb1, t_num *nb2);

#endif
