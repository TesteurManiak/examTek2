/*
** intersect.c for intersect in /home/exam/rendu/task01
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 11 08:04:34 2017 exam user
** Last update Sat Mar 11 08:24:06 2017 exam user
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i = 0;
  while (str[i])
    i++;
  return (i);
}

int	longest(char *s1, char *s2)
{
  if(my_strlen(s1) >= my_strlen(s2))
    return(my_strlen(s1));
  return (my_strlen(s2));
}

int	already_here(char *common, char c)
{
  int	i = 0;

  while (common[i])
    {
      if (common[i] == c)
	return (1);
      i++;
    }
  return (0);
}

char	*intersect(char *s1, char *s2)
{
  int	i = 0;
  int	j = 0;
  int	k = 0;
  char	*common;

  if (!s1 || !s2)
    return (NULL);
  common = malloc(sizeof(char) * longest(s1, s2));
  while (s1[i])
    {
      j = 0;
      while (s2[j])
	{
	  if(s2[j] == s1[i])
	    {
	      if (already_here(common, s1[i]) != 1)
		{
		  common[k] = s1[i];
		  k++;
		}
	    }
	  j++;
	}
      i++;
    }
  common[k] = '\0';
  return (common);
}
