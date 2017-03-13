/*
** ulstr.c for ulstr in /home/exam/rendu/task02
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 11 08:26:34 2017 exam user
** Last update Sat Mar 11 08:44:22 2017 exam user
*/

#include <unistd.h>

int	my_strlen(char *str)
{
  int	i = 0;

  while (str[i])
    i++;
  return (i);
}

int	my_isalpha(char c)
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
  int	i = 0;
  char	c;

  if (!str)
    return;
  while (str[i])
    {
      if (my_isalpha(str[i]) == 1)
	{
	  if (is_maj(str[i]) == 1)
	    {
	      c = str[i] + 32;
	      write(1, &c, 1);
	    }
	  else
	    {
	      c = str[i] - 32;
	      write(1, &c, 1);
	    }
	}
      else
	write(1, &str[i], 1);
      i++;
    }
  write(1, "\n", 1);
}
