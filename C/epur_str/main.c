/*
** main.c for main in /home/exam/rendu/epur_str
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Apr  8 09:29:31 2017 exam user
** Last update Sat Apr  8 10:53:34 2017 exam user
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	last_word(int pos, char *str)
{
  int	i;

  i = pos;
  while (str[i])
    {
      if (str[i] != ' ' && str[i] != '\t')
	return (0);
      i++;
    }
  return (1);
}

void	epur_str(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] != ' ' && str[i] != '\t')
	my_putchar(str[i]);
      else if (i > 0 && last_word(i, str) == 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
	my_putchar(' ');
    }
}

int	main(int ac, char **av)
{
  if (ac == 2)
    epur_str(av[1]);
  my_putchar('\n');
  return (0);
}
