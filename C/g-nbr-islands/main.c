/*
** main.c for main in /home/exam/rendu/g-nbr-islands
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 25 09:16:49 2017 exam user
** Last update Sat Mar 25 11:23:41 2017 exam user
*/

#include "my.h"

static int nb_islands = 1;

int	my_strlen(char *str)
{
  int	i = 0;

  while (str[i])
    i++;
  return (i);
}

int	count_word(char *str)
{
  int	i = 0;
  int	words = 0;

  while (str[i])
    {
      if (str[i] == ' ')
	words++;
      i++;
    }
  words++;
  return (words);
}

char	**my_str_to_wordtab(char *str)
{
  int	i = 0;
  int	j = 0;
  int	k;
  int	words;
  char	**tab;

  words = count_word(str);
  tab = malloc(sizeof(char*) * (words + 1));
  while (i < words)
    {
      k = 0;
      tab[i] = malloc(sizeof(char) * my_strlen(str));
      while (str[j] != ' ' && str[j])
	{
	  tab[i][k] = str[j];
	  k++;
	  j++;
	}
      tab[i][k] = '\0';
      j++;
      i++;
    }
  tab[i] = NULL;
  return (tab);
}

void	print_tab(char **tab)
{
  int	i;
  
  for (i = 0; tab[i]; i++)
    printf("%s\n", tab[i]);
}

void	link_islands(char *str)
{
  char	**tab;

  tab = my_str_to_wordtab(str);
  printf("%d", nb_islands);  
}

int	main(int ac, char **av)
{
  if (ac == 2)
    link_islands(av[1]);
  printf("\n");
  return (0);
}
