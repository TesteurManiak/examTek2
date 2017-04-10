/*
** ord_alphlen.c for ord_alphlen in /home/guillaume/GitHub/exam/C/ord_alphlen/
**
** Made by Guillaume Roux
** Login   <guillaume2.roux@epitech.eu>
**
** Started on  Sun Feb 26 20:01:55 2017 Guillaume Roux
** Last update Mon Feb 27 03:50:27 2017 Guillaume Roux
*/

#include "my.h"

void	swap(char **a, char **b)
{
  char	*tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}

char	to_upper(char *c)
{
  char	tmp = *c;

  if (tmp >= 'a' && tmp <= 'z')
    return (tmp - 32);
  return (tmp);
}

int	my_strcasecmp(char *s1, char *s2)
{
  int			i = 0;

  while ((s1[i] != '\0') && (s2[i] != '\0'))
    {
      if (to_upper(&s1[i]) != to_upper(&s2[i]))
	{
	 if (to_upper(&s1[i]) < to_upper(&s2[i]))
	   return (0);
	 else
	   return (1);
	}
      i++;
    }
  return (0);
}

void	sort(char **tab)
{
  int	i = 0;
  int	j;

  while (tab[i])
    {
      j = i;
      while (tab[j])
	{
	  if (my_strlen(tab[j]) < my_strlen(tab[i]))
	    swap(&tab[i], &tab[j]);
	  else if (my_strlen(tab[j]) == my_strlen(tab[j]) && my_strcasecmp(tab[i], tab[j]) != 0)
	    swap(&tab[i], &tab[j]);
	  j++;
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
