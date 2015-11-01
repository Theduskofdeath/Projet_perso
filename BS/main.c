/*
** main.c for main bistro in /home/marie-_j/rendu/Projet_Perso/BS
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Sat Oct 31 11:07:21 2015 Jean-Denis Marie-Sainte
** Last update Sat Oct 31 11:09:59 2015 Jean-Denis Marie-Sainte
*/

#include "common.h"

int		main(int ac, char **av)
{
  char		*expr;
  unsigned int	size;

  if (ac != 4)
    {
      my_putstr("Usage : ");
      my_putstr(av[0]);
      my_putstr(" base ops\"()+-*/%\" exp_len\n");
      return (1);
    }
  check_base(av[1]);
  check_ops(av[2]);
  size = my_getnbr(av[3]);
  expr = get_expr(size);
  my_putstr(eval_expr(av[1], av[2], expr, size));
  return (0);
}
