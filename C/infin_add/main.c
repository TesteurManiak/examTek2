/*
** main.c for main in /home/exam/rendu/task03
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 25 09:22:43 2017 exam user
** Last update Sat Feb 25 11:15:18 2017 exam user
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i = 0;

  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  int	i = 0;

  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_printer(char *str)
{
  int	i = 0;
  while (str[i] == '0')
    i++;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	the_great(t_num *nb1, t_num *nb2)
{
  int	i = 0;
  int	j = 0;
  
  if (nb2->size > nb1->size)
    return (1);
  if (nb1->size > nb2->size)
    return (0);
  while (nb1->num[i] == '-')
    i++;
  while (nb2->num[j] == '-')
    j++;
  while (nb1->num[i] != '\0')
    {
      if (nb2->num[j] > nb1->num[i])
	return (1);
      else if (nb1->num[i] > nb2->num[j])
	return (0);
      j++;
      i++;
    }
  return (0);
}

int	main(int ac, char **av)
{
  char	*result;
  t_num	nb1;
  t_num	nb2;
  
  if (ac == 3)
    {
      init_num(&nb1, av[1]);
      init_num(&nb2, av[2]);
      result = infin_add(&nb1, &nb2);
      free(result);
    }
  return (0);
}
