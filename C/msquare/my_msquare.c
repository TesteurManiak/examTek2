/*
** my_msquare.c for msquare in /home/guillaume/GitHub/exam/C/msquare/
**
** Made by Guillaume Roux
** Login   <guillaume2.roux@epitech.eu>
**
** Started on  Fri Mar 24 18:42:29 2017 Guillaume Roux
** Last update Fri Mar 24 20:26:10 2017 Guillaume Roux
*/

char	square[9];
int		list_nb[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

#include "my.h"

void	print_square()
{
  int	i;

  for (i = 0; i < 9; i++)
    {
      my_putchar(square[i]);
      my_putchar(' ');
    }
  my_putstr("OK\n");
}

void	fill_square(char *sq)
{
  int	i;
  int	j = 0;

  for (i = 0; i < 9; i++)
    {
      if (sq[j] == '?')
	square[i] = '0';
      else
	square[i] = sq[j];
      j += 2;
    }
}

int	check_square()
{
  if (check_col() == 1 || check_row() == 1 || check_diag() == 1)
    return (1);
  return (0);
}

void	solve_square()
{
  already_present();
  solve_1();
}

void	msquare(char *sq)
{
  fill_square(sq);
  if (check_square() == 1)
    {
      my_putstr("KO\n");
      return;
    }
  solve_square();
  if (check_square() == 1)
    {
      my_putstr("KO\n");
      return;
    }
  print_square();
}
