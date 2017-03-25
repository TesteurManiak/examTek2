/*
** main.c for main in /home/exam/rendu/union
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 25 08:34:20 2017 exam user
** Last update Sat Mar 25 08:50:26 2017 exam user
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	already_inside(char *s, char c, int pos)
{
  int	i;
  int	total = 0;

  for (i = 0; i <= pos; i++)
    {
      if (s[i] == c)
	total++;
    }
  return (total);
}

int	is_inside(char c, char *s)
{
  int	i;

  for (i = 0; s[i]; i++)
    {
      if (s[i] == c)
	return (1);
    }
  return (0);
}

void	my_union(char *s1, char *s2)
{
  int	i;
  int	print;

  for (i = 0; s1[i]; i++)
    {
      print = 1;
      if (already_inside(s1, s1[i], i) > 1)
	print = 0;
      if (print == 1)
	my_putchar(s1[i]);
    }
  for (i = 0; s2[i]; i++)
    {
      print = 1;
      if (already_inside(s2, s2[i], i) > 1 || is_inside(s2[i], s1))
	print = 0;
      if (print == 1)
	my_putchar(s2[i]);
    }
}

int	main(int ac, char **av)
{
  if (ac == 3)
    my_union(av[1], av[2]);
  my_putchar('\n');
  return (0);
}
