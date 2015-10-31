/*
** add.c for addition in /home/marie-_j
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Fri Oct 23 14:47:26 2015 Jean-Denis Marie-Sainte
** Last update Tue Oct 27 16:56:26 2015 Jean-Denis Marie-Sainte
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

void		calc(char *nb1, char *nb2)
{
  t_calc	c;
  char		s;

  c.str = NULL;
  c.i = my_strlen(nb1) - 1;
  c.i2 = my_strlen(nb2) - 1;
  c.retenue = 0;
  while (nb1[c.i] != 0)
    {
      c.n1 = my_getc(nb1[c.i]);
      c.n2 = my_getc(nb2[c.i2]);
      c.i--;
      c.i2--;
      if (c.retenue == 1)
	{
	  c.n1 = c.n1 + c.retenue;
	  c.retenue = 0;
	}
      if ((c.n1 + c.n2) >= 10)
	ret(&c, &s);
      else
	cond(&c, &s);
    }
  my_putstr(my_rev_str(c.str));
}
