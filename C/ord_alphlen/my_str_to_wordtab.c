/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/guillaume/GitHub/exam/C/ord_alphlen/
**
** Made by Guillaume Roux
** Login   <guillaume2.roux@epitech.eu>
**
** Started on  Sun Feb 26 20:15:22 2017 Guillaume Roux
** Last update Sun Feb 26 20:28:11 2017 Guillaume Roux
*/

#include "my.h"

int	find_word(char *str)
{
  int	i, nb;

  i = nb = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
	  while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	    i++;
	  nb++;
	}
      i++;
    }
  return (nb);
}


char    **my_str_to_wordtab(char *str)
{
  char **tab;
  int	nb, i, j, k;

  i = k = 0;
  nb = find_word(str);
  tab = malloc(sizeof(char *) * (nb + 1));
  while (str[i] != '\0')
    {
      tab[k] = malloc(sizeof(char) * my_strlen(str));
      while ((str[i] <= '/' && str[i] >= 32) || (str[i] <= '@' && str[i] >= ':' ) || (str[i] <= '`' && str[i] >= '[') || (str[i] <= 127 && str[i] >= '{'))
	  i++;
      j = 0;
      while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	    {
	      tab[k][j] = str[i];
	      i++;
	      j++;
	    }
      k++;
    }
  tab[k] = NULL;
  return (tab);
}
