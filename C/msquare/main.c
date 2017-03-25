/*
** main.c for main in /home/guillaume/GitHub/exam/C/msquare/
**
** Made by Guillaume Roux
** Login   <guillaume2.roux@epitech.eu>
**
** Started on  Fri Mar 24 18:42:00 2017 Guillaume Roux
** Last update Fri Mar 24 18:54:18 2017 Guillaume Roux
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i = 0;

  while (str[i])
    i++;
  return (i);
}

void	my_putchar(char c)
{
  write (1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i = 0;

  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac != 2 || my_strlen(av[1]) != 17)
    my_putstr("KO\n");
  else
    msquare(av[1]);
  return (0);
}
