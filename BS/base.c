/*
** base.c for base in /home/marie-_j
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Thu Oct 15 12:13:35 2015 Jean-Denis Marie-Sainte
** Last update Thu Oct 15 12:19:19 2015 Jean-Denis Marie-Sainte
*/

#include "common.h"

int	my_getnbr(char *str)
{
  int	i;
  int	sign;
  int	number;
  int	number2;

  number = 0;
  i = 0;
  sign = 1;
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	sign = -1 * sign;
      i = i + 1;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      number = number * 10 + (str[i] - '0');
      number2 = number * 10 + (str[i] - 48);
      if(number2 < number )
	return (0);
      i = i + 1;
    }
  return (number * sign);
}
