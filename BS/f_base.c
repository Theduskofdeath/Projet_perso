/*
** f_base.c for base in /home/marie-_j
** 
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
** 
** Started on  Fri Sep 18 16:47:44 2015 Jean-Denis Marie-Sainte
** Last update Mon Sep 21 03:03:35 2015 Jean-Denis Marie-Sainte
*/

#include <unistd.h>
#include "common.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  write(1, &str, my_strlen(str));
}

void	my_puterr(char *str)
{
  write(2, &str, my_strlen(str));
}

char	*my_rev_str(char *str)
{
  int	len;
  int	tmp;
  int	i;
  char	a;
  char	b;

  i = 0;
  len = my_strlen(str);
  len = len - 1;
  tmp = len;
  len = len / 2;
  while ( i <= len )
    {
      a = str[i];
      b = str[tmp];
      str[tmp] = a;
      str[i] = b;
      i++;
      tmp = tmp - 1;
    }
  return (str);
}
