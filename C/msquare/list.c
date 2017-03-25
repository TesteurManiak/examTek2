/*
** list.c for list in /home/guillaume/GitHub/exam/C/msquare/
**
** Made by Guillaume Roux
** Login   <guillaume2.roux@epitech.eu>
**
** Started on  Fri Mar 24 20:13:55 2017 Guillaume Roux
** Last update Fri Mar 24 20:25:45 2017 Guillaume Roux
*/

char	square[9];
int		list_nb[9];

#include "my.h"

void	del_from_list(int nb)
{
  int	i;

  for (i = 0; i < 9; i++)
    {
      if (list_nb[i] == nb)
	{
	  list_nb[i] = 0;
	  return;
	}
    }
}

void	already_present()
{
  int	i;

  for (i = 0; i < 9; i++)
    {
      if (square[i] != '0')
	del_from_list(square[i] - '0');
    }
}
