/*
** ord_alphlen.c for ord_alphlen in /home/guillaume/GitHub/exam/C/ord_alphlen/
**
** Made by Guillaume Roux
** Login   <guillaume2.roux@epitech.eu>
**
** Started on  Sun Feb 26 20:01:55 2017 Guillaume Roux
** Last update Mon Feb 27 03:21:03 2017 Guillaume Roux
*/

#include "my.h"

void	swap(char **a, char **b)
{
  char	*tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}

char	to_upper(char c)
{
  if (c >= 'a' && c <= 'z')
    return (c - 32);
  return (c);
}

int	my_strcasecmp(char *s1, char *s2)
{
  int			i = 0;

  while ((s1[i] != '\0') && (s2[i] != '\0'))
    {
      if (to_upper(s1[i]) != to_upper(s2[i]))
	return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}

void	sort(char **tab)
{
  int		i = 0;
  int		j;

  while (tab[i])
    {
      for (j = i; tab[j]; ++j)
	{
	  if (my_strlen(tab[j]) < my_strlen(tab[i]))
	    swap(&tab[i], &tab[j]);
	  else if (my_strlen(tab[j]) == my_strlen(tab[i]) && my_strcasecmp(tab[i], tab[j]) > 0)
	    swap(&tab[i], &tab[j]);
	}
      i++;
    }
}

void	ord_alphlen(char *str)
{
	char	**tab = my_str_to_wordtab(str);

  sort(tab);
  aff_tab(tab);
  free_tab(tab);
}
