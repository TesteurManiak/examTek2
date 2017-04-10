/*
** main.c for main in /home/exam/rendu/mult_table
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Apr  8 09:11:30 2017 exam user
** Last update Sat Apr  8 11:08:31 2017 exam user
*/

#include <stdio.h>
#include <stdlib.h>

void	mult_table(int nb)
{
  int	i;

  for (i = 1; i <= 9; i++)
    printf("%d x %d = %d\n", i, nb, nb * i);
}

int	main(int ac, char **av)
{
  if (ac == 2)
    mult_table(atoi(av[1]));
  else
    printf("\n");
  return (0);
}
