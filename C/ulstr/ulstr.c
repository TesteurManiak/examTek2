/*
** ulstr.c for ulstr in /home/exam/rendu/ulstr
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 25 08:52:45 2017 exam user
** Last update Sat Mar 25 09:00:07 2017 exam user
*/

#include <unistd.h>

int	is_alpha(char c)
{
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return (1);
  return (0);
}

int	is_maj(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  return (0);
}

void	ulstr(char *str)
{
  int	i;
  char	c;

  for (i = 0; str[i]; i++)
    {
      c = str[i];
      if (is_alpha(str[i]) == 1)
	{
	  if (is_maj(str[i]) == 1)
	    c = str[i] + 32;
	  else
	    c = str[i] - 32;
	}
      write (1, &(c), 1);
    }
  write (1, "\n", 1);
}
