/*
** do-op.c for do-op in /home/exam/rendu/task01
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 25 08:43:41 2017 exam user
** Last update Sat Feb 25 09:04:15 2017 exam user
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb >= 0 && nb <= 9)
      my_putchar(nb + '0');
  else
    {
      my_putnbr(nb / 10);
      my_putnbr(nb % 10);
    }
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

void	do_op(int nb1, char *op, int nb2)
{
  int	result = 0;

  if (op[0] == '+')
    result = nb1 + nb2;
  else if (op[0] == '-')
    result = nb1 - nb2;
  else if (op[0] == '*')
    result = nb1 * nb2;
  else if (op[0] == '/')
    {
      if (nb2 == 0)
	{
	  my_putstr("Stop : division by zero\n");
	  return;
	}
      result = nb1 / nb2;
    }
  else if (op[0] == '%')
    {
      if (nb2 == 0)
	{
	  my_putstr("Stop : modulo by zero\n");
	  return;
	}
      result = nb1 % nb2;
    }
  my_putnbr(result);
  my_putchar('\n');
}
