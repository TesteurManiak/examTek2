/*
** main.c for main in /home/exam/rendu/hidenp
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Apr  8 09:19:16 2017 exam user
** Last update Sat Apr  8 11:04:23 2017 exam user
*/

#include <unistd.h>

int	my_strlen(char *str)
{
  int	i = 0;

  while (str[i])
    i++;
  return (i);
}

void	hidenp(char *first, char *second)
{
  int	i = 0;
  int	j = 0;
  
  while (second[i])
    {
      if (first[j] == second[i])
	j++;
      i++;
    }
  if (j == my_strlen(first))
    write(1, "1", 1);
  else
    write(1, "0", 1);
}

int	main(int ac, char **av)
{
  if (ac == 3)
    hidenp(av[1], av[2]);
  write(1, "\n", 1);
  return (0);
}
