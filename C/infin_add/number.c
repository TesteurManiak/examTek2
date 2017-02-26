/*
** number.c for number in /home/exam/rendu/task03
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 25 09:42:03 2017 exam user
** Last update Sat Feb 25 09:48:30 2017 exam user
*/

#include "my.h"

void    init_num(t_num *nb, char *num)
{
  nb->num = num;
  nb->size = get_size(num);
  nb->neg = get_sign(num);
}

int	get_size(char *num)
{
  int	i = 0;
  int	j = 0;

  while (num[i] == '-' && num[i] != '\0')
    i++;
  while (num[i] >= '0' && num[i] <= '9' && num[i] != '\0')
    {
      j++;
      i++;
    }
  return (j);
}

int	get_sign(char *num)
{
  int	i = 0;

  while (num[i] != '\0')
    {
      if (num[i] == '-')
	return (1);
      i++;
    }
  return (0);
}
