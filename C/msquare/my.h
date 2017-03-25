/*
** my.h for my in /home/guillaume/GitHub/exam/C/msquare/
**
** Made by Guillaume Roux
** Login   <guillaume2.roux@epitech.eu>
**
** Started on  Fri Mar 24 18:42:55 2017 Guillaume Roux
** Last update Fri Mar 24 20:24:01 2017 Guillaume Roux
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>

extern char square[9];
extern int list_nb[9];

void	my_putchar(char c);
void	my_putstr(char *str);
int		my_strlen(char *str);
void	msquare(char *sq);
void	solve_1();

int	check_col();
int	check_row();
int	check_diag();

void	already_present();
void	del_from_list(int nb);

#endif
