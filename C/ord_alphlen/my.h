/*
** my.h for my in /home/guillaume/GitHub/exam/C/ord_alphlen/
**
** Made by Guillaume Roux
** Login   <guillaume2.roux@epitech.eu>
**
** Started on  Sun Feb 26 19:59:58 2017 Guillaume Roux
** Last update Sun Feb 26 20:27:12 2017 Guillaume Roux
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>

void	my_putchar(char c);
int		my_strlen(char *str);
char	**my_str_to_wordtab(char *str);
void	free_tab(char **tab);
void	aff_tab(char **tab);
void	my_putstr(char *str);
void	my_putchar(char c);
void	ord_alphlen(char *str);

#endif
