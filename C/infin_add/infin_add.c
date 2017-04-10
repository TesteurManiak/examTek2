/*
** infin_add.c for infin_add in /home/exam/rendu/task03
**
** Made by exam user
** Login   <exam@epitech.net>
**
** Started on  Sat Feb 25 09:29:28 2017 exam user
** Last update Sun Feb 26 19:43:00 2017 Guillaume Roux
*/

#include "my.h"

void	fill_zero(char *dest, int num)
{
  int	i = 0;
  while (i < num)
    {
      dest[i] = '0';
      i++;
    }
}

void	copy_in(char *dest, t_num *num)
{
  int	i = my_strlen(num->num) - 1;
  int	j = my_strlen(dest) - 1;

  while (i >= 0 && num->num[i] != '-')
    {
      dest[j] += (num->num[i] - '0');
      j--;
      i--;
    }
}

void	add_it(char *result, t_num *nb1, t_num *nb2)
{
  int	i = my_strlen(result) - 1;
  int	j;
  int	ret = 0;

  if (nb1->size <= nb2->size)
    {
      copy_in(result, nb1);
      j = my_strlen(nb2->num) - 1;
      while (j >= 0 && nb2->num[j] != '-')
	{
	  result[i] += nb2->num[j] - '0' + ret;
	  ret = 0;
	  if (result[i] > '9')
	    {
	      result[i] -= 10;
	      ret = 1;
	    }
	  i--;
	  j--;
	}
    }
  else
    {
      copy_in(result, nb2);
      j = my_strlen(nb1->num) - 1;
      while (j >= 0 && nb1->num[j] != '-')
	{
	  result[i] += nb1->num[j] - '0' + ret;
	  ret = 0;
	  if (result[i] > '9')
	    {
	      result[i] -= 10;
	      ret = 1;
	    }
	  i--;
	  j--;
	}
    }
  while (i >= 0)
    {
      result[i] += ret;
      ret = 0;
      if (result[i] > '9')
	{
	  result[i] -= 10;
	  ret = 1;
	}
      i--;
    }
}

int	longest(int size1, int size2)
{
  if (size1 >= size2)
    return (size1);
  return (size2);
}

char	*infin_add(t_num *nb1, t_num *nb2)
{
  char	*result;

  result = malloc(sizeof(char) * (longest(nb1->size, nb2->size) + 2));
  fill_zero(result, longest(nb1->size, nb2->size) + 1);
  if (nb1->neg == 0 && nb2->neg == 0)
    add_it(result, nb1, nb2);
  else if (nb1->neg == 0 && nb2->neg == 1)
    {
      if (the_great(nb1, nb2) == 1)
	{
	  my_putchar('-');
	  infin_sub(result, nb2, nb1);
	}
      else
	infin_sub(result, nb1, nb2);
    }
  else if (nb1->neg == 1 && nb2->neg == 0)
    {
      if (the_great(nb2, nb1) == 1)
	{
	  my_putchar('-');
	  infin_sub(result, nb1, nb2);
	}
      else
	infin_sub(result, nb2, nb1);
    }
  else if (nb1->neg == 1 && nb2->neg == 1)
    {
      my_putchar('-');
      add_it(result, nb1, nb2);
    }
  my_printer(result);
  my_putchar('\n');
  return (result);
}
