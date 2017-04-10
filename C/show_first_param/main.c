/*
** main.c for main in /home/exam/rendu/show_first_param
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Apr  8 09:05:58 2017 exam user
** Last update Sat Apr  8 09:09:21 2017 exam user
*/

#include <unistd.h>

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
  if (ac > 1)
    my_putstr(av[1]);
  my_putchar('\n');
  return (0);
}
