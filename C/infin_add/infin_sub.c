/*
** infin_sub.c for infin_sub in /home/exam/rendu/task03
** 
** Made by exam user
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 25 10:37:24 2017 exam user
** Last update Sat Feb 25 11:09:05 2017 exam user
*/

#include "my.h"

void	infin_sub(char *result, t_num *nb1, t_num *nb2)
{
  int   i = my_strlen(result) - 1;
  int   j;
  int   ret = 0;

  copy_in(result, nb1);
  j = my_strlen(nb2->num) - 1;
  while (j >= 0 && nb2->num[j] != '-')
    {
      result[i] -= nb2->num[j] - '0' + ret;
      ret = 0;
      if (result[i] < '0')
	{
	  result[i] += 10;
	  ret = 1;
	}
      i--;
      j--;
    }
  while (i >= 0)
    {
      result[i] -= ret;
      ret = 0;
      if (result[i] < '0')
        {
          result[i] += 10;
          ret = 1;
        }
      i--;
    }
}
