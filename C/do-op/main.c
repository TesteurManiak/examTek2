/*
** main.c for main in /home/exam/rendu/do-op
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 25 09:02:05 2017 exam user
** Last update Sat Mar 25 09:13:51 2017 exam user
*/

#include <stdio.h>

int	my_getnbr(char *str)
{
  int	i = 0;
  int	nb = 0;
  int	nega = 1;

  while (str[i] == '-')
    {
      nega = -nega;
      i++;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (nb * nega);
}

void	do_op(int nb1, char *op, int nb2)
{
  if (op[0] == '+')
    printf("%d\n", (nb1 + nb2));
  else if (op[0] == '-')
    printf("%d\n", (nb1 - nb2));
  else if (op[0] == '*')
    printf("%d\n", (nb1 * nb2));
  else if (op[0] == '/')
    {
      if (nb2 == 0)
	{
	  printf("Stop : division by zero\n");
	  return;
	}
      else
	printf("%d\n", (nb1 / nb2));
    }
  else if (op[0] == '%')
    {
      if (nb2 == 0)
	{
	  printf("Stop : modulo by zero\n");
	  return;
	}
      else
	printf("%d\n", (nb1 % nb2));
    }
  else
    printf("0\n");
}

int	main(int ac, char **av)
{
  if (ac == 4)
    do_op(my_getnbr(av[1]), av[2], my_getnbr(av[3]));
  return (0);
}
