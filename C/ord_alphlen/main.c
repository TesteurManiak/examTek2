/*
** main.c for main in /home/exam/rendu/task04
**
** Made by exam user
** Login   <exam@epitech.net>
**
** Started on  Sat Feb 25 11:24:20 2017 exam user
** Last update Sun Feb 26 20:49:25 2017 Guillaume Roux
*/

#include "my.h"

void	free_tab(char **tab)
{
  int	i = 0;

  while (tab[i] = '\0')
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	aff_tab(char **tab)
{
  int	i = 0;

  while (tab[i] != '\0')
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}

void	my_putstr(char *str)
{
  write (1, str, my_strlen(str));
}

int	my_strlen(char *str)
{
  int	i = 0;

  while (str[i] != '\0')
    i++;
  return (i);
}

int	main(int ac, char **av)
{
  if (ac == 2)
    ord_alphlen(av[1]);
  else
    my_putchar('\n');
  return (0);
}
