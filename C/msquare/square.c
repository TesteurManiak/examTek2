/*
** square.c for square in /home/guillaume/GitHub/exam/C/msquare/
**
** Made by Guillaume Roux
** Login   <guillaume2.roux@epitech.eu>
**
** Started on  Fri Mar 24 19:49:51 2017 Guillaume Roux
** Last update Fri Mar 24 20:12:01 2017 Guillaume Roux
*/

char square[9];

#include "my.h"

int	check_col()
{
  int	i;
  int	sum;

  for (i = 0; i < 9; i += 3)
    {
      sum = 0;
      if (square[i] != '0' && square[i + 3] != '0' && square[i + 6] != '0')
	sum = square[i] - '0' + square[i + 3] - '0' + square[i + 6] - '0';
      if (sum > 0)
	{
	  if (sum != 15)
	    return (1);
	}
    }
  return (0);
}

int	check_row()
{
  int	i;
  int	sum;

  for (i = 0; i < 9; i += 3)
    {
      sum = 0;
      if (square[i] != '0' && square[i + 1] != '0' && square[i + 2] != '0')
	sum = square[i] - '0' + square[i + 1] - '0' + square[i + 2] - '0';
      if (sum > 0)
	{
	  if (sum != 15)
	    return (1);
	}
    }
  return (0);
}

int	check_diag()
{
  int	sum = 0;

  if (square[0] != '0' && square[4] != '0' && square[8] != '0')
    sum = square[0] - '0' + square[4] - '0' + square[8] - '0';
  if (sum > 0)
    {
      if (sum != 15)
	return (1);
    }
  sum = 0;
  if (square[2] != '0' && square[4] != '0' && square[6] != '0')
    sum = square[2] - '0' + square[4] - '0' + square[6] - '0';
  if (sum > 0)
    {
      if (sum != 15)
	return (1);
    }
  return (0);
}

void	solve_1()
{
  
}
