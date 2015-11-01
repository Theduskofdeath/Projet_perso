/*
** add.c for addition in /home/marie-_j
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Fri Oct 23 14:47:26 2015 Jean-Denis Marie-Sainte
** Last update Sun Nov  1 19:59:59 2015 Jean-Denis Marie-Sainte
*/

#include <stdlib.h>
#include "common.h"

void	ret(t_calc *c, char *s)
{
  c->retenue = 1;
  c->tmp = c->n1 + c->n2;
  c->tmp = c->tmp - 10;
  *s = c->tmp + '0';
  c->str = add_to_str(c->str, *s);
}

void	cond(t_calc *c, char *s)
{
  c->tmp = c->n1 + c->n2;
  *s = c->tmp + '0';
  c->str = add_to_str(c->str , *s);
}

void	attrib(t_calc *c, char *nb1, char *nb2)
{
  c->str = NULL;
  c->s_tmp = NULL;
  c->i = my_strlen(nb1) - 1;
  c->i2 = my_strlen(nb2) - 1;
  c->retenue = 0;
}

void	algo_calc(t_calc *c, char *nb1, char *nb2, char *s)
{
  while (c->lmax > -1)
    {
      c->n1 = my_getc(nb1[c->i]);
      c->n2 = my_getc(nb2[c->i2]);
      if (c->i2 > -1 && c->i < 0)
	c->n1 = 0;
      if (c->i > -1 && c->i2 < 0)
	c->n2 = 0;
      if (c->retenue == 1)
	{
	  c->n1 = c->n1 + c->retenue;
	  c->retenue = 0;
	}
      if ((c->n1 + c->n2) >= 10)
	ret(c, s);
      else
	cond(c, s);
      c->i--;
      c->i2--;
      c->lmax--;
    }
}

char		*calc(char *nb1, char *nb2)
{
  t_calc	c;
  char		s;

  attrib(&c, nb1, nb2);
  if (c.i2 > c.i)
    {
      c.lmax = c.i2;
      c.s_tmp = nb2;
    }
  else
    {
      c.lmax = c.i;
      c.s_tmp = nb1;
    }
  algo_calc(&c , nb1, nb2, &s);
  if (c.retenue > 0)
    {
      s = c.retenue + '0';
      c.str = add_to_str(c.str, s);
    }
  c.str = my_rev_str(c.str);
  return (c.str);
}
