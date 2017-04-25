/*
** my_sort_wordtab.c for my_sort_wordtab in /home/exam/rendu/my_sort_wordtab
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Mon Apr 24 15:34:35 2017 exam user
** Last update Mon Apr 24 16:38:02 2017 exam user
*/

void	swap(char **s1, char **s2)
{
  char	*tmp;

  tmp = *s1;
  *s1 = *s2;
  *s2 = tmp;
}

int	is_order(char *s1, char *s2)
{
  int	i = 0;

  while (s1[i] == s2[i])
    i++;
  if (s2[i] < s1[i])
    return (1);
  return (0);
}

int	final(char **tab)
{
  int	i = 0;

  while (tab[i])
    {
      if (tab[i + 1] && is_order(tab[i], tab[i + 1]) == 1)
	return (1);
      i++;
    }
  return (0);
}

int	my_sort_wordtab(char **tab)
{
  int	i;

  while (final(tab) != 0)
    {
      i = 0;
      while (tab[i])
	{
	  if (tab[i + 1] && is_order(tab[i], tab[i + 1]))
	    swap(&(tab[i]), &(tab[i + 1]));
	  i++;
	}
    }
  return (0);
}
