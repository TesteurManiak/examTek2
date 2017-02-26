/*
** main.c for main in /home/exam/rendu/task01
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 25 08:36:26 2017 exam user
** Last update Sat Feb 25 09:07:11 2017 exam user
*/

#include "my.h"

int	getnbr(char *str)
{
  int	i = 0;
  int	nb = 0;
  int	nega = 1;

  while (str[i] == '-' && str[i] != '\0')
    {
      nega = -nega;
      i++;
    }
  while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (nb * nega);
}

int	main(int ac, char **av)
{
  if (ac == 4)
    do_op(getnbr(av[1]), av[2], getnbr(av[3]));
  return (0);
}
