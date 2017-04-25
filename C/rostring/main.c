/*
** main.c for main in /home/exam/rendu/rostring
**
** Made by exam user
** Login   <exam@epitech.net>
**
** Started on  Mon Apr 24 14:49:47 2017 exam user
** Last update Tue Apr 25 13:00:46 2017 guillaume2.roux
*/
#include <unistd.h>

#include <unistd.h>

int	separate(char c)
{
  if (c == ' ' || c == '\t' || c == '\0')
    return (1);
  return (0);
}

void	rostring(char *s, int ac)
{
  int	i;
  int	first_word_start = 0;
  int	first_word_len = 0;

  while (separate(s[first_word_start]) == 1 && s[first_word_start] != '\0')
    first_word_start++;
  while (separate(s[first_word_start + first_word_len]) == 0)
    first_word_len++;
  i = first_word_start + first_word_len;
  while (s[i] != '\0')
    {
      while (separate(s[i]) == 1 && s[i] != '\0')
	i++;
      if (s[i] == '\0')
	break;
      if (ac == 0)
	write(1, " ", 1);
      ac = 0;
      while (separate(s[i]) == 0)
	{
	  write(1, &(s[i]), 1);
	  i++;
  }
    }
  if (first_word_len && ac == 0)
    write(1, " ", 1);
  write(1, s + first_word_start, first_word_len);
}

int	main(int ac, char **av)
{
  if (ac == 2)
    rostring(av[1], ac);
  write(1, "\n", 1);
  return (0);
}
