/*
** err.c for gest err.c in /home/marie-_j/rendu/Projet_Perso/BS
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Sat Oct 31 10:42:01 2015 Jean-Denis Marie-Sainte
** Last update Sun Nov  1 20:08:18 2015 Jean-Denis Marie-Sainte
*/

#include <stdlib.h>
#include <unistd.h>
#include "common.h"

void	check_base(char *b)
{
  int	i;

  i = 0;
  if (my_strlen(b) < 2)
    {
      my_putstr(S_ERR_MSG);
      exit(1);
    }
  if ((b[i] >= '(' && b[i] <= '+' )|| b[i] == '-' || b[i] == '%' || b[i] == '/')
    my_puterr(S_ERR_MSG);
}

char	*get_expr(unsigned int size)
{
  char *expr;

  if (size <= 0)
    {
      my_putstr(S_ERR_MSG);
      exit(2);
    }
  if ((expr = malloc(size+1)) == NULL)
    exit(7);
  if (expr == 0)
    {
      my_putstr(ERR_MSG);
      exit(3);
    }
  if (read(0, expr, size) != size)
    {
      my_putstr(ERR_MSG);
      exit(4);
    }
  expr[size] = 0;
  return (expr);
}

void	check_ops(char *ops)
{
  if (my_strlen(ops) != 7)
    {
      my_putstr(S_ERR_MSG);
      exit(5);
    }
}
