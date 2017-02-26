/*
** main.c for main in /home/exam/rendu/task02
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 25 09:12:16 2017 exam user
** Last update Sat Feb 25 09:18:22 2017 exam user
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}

void	dec_alpha(char *str)
{
  int	i = 0;

  while (str[i] != '\0')
    {
      if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
	  if (str[i] == 'Z' || str[i] == 'z')
	    str[i] -= 25;
	  else
	    str[i]++;
	}
      my_putchar(str[i]);
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac == 2)
    dec_alpha(av[1]);
  my_putchar('\n');
  return (0);
}
