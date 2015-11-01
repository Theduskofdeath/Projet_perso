/*
** sous.c for soustraction in /home/marie-_j/rendu/Projet_Perso/BS
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Tue Oct 27 16:54:26 2015 Jean-Denis Marie-Sainte
** Last update Sun Nov  1 20:09:38 2015 Jean-Denis Marie-Sainte
*/

#include <stdlib.h>
#include "common.h"

void	ret_s(t_calc *c, char *s)
{
  c->retenue = 10;
  c->tmp = (c->n1 + c->retenue) - c->n2;
  *s = c->tmp + '0';
  c->str = add_to_str(c->str, *s);
}

void	cond_s(t_calc *c, char *s)
{
  c->tmp = c->n1 - c->n2;
  *s = c->tmp + '0';
  c->str = add_to_str(c->str , *s);
}

void	atrib_s(t_calc *c, char *nb1, char *nb2)
{
  c->str = NULL;
  c->i = my_strlen(nb1) - 1;
  c->i2 = my_strlen(nb2) - 1;
  c->retenue = 0;
}

char		*calc_s(char *nb1, char *nb2)
{
  t_calc	c;
  char		s;

  atrib_s(&c, nb1, nb2);
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
  algo_calc_s(&c , nb1, nb2, &s);
  if (c.retenue > 0)
    {
      s = c.retenue + '0';
      c.str = add_to_str(c.str, s);
    }
  return (my_rev_str(c.str));
}

void	algo_calc_s(t_calc *c, char *nb1, char *nb2, char *s)
{
  while (c->lmax > -1)
    {
      c->n1 = my_getc(nb1[c->i]);
      c->n2 = my_getc(nb2[c->i2]);
      if (c->i2 > -1 && c->i < 0)
	c->n1 = 0;
      if (c->i > -1 && c->i2 < 0)
	c->n2 = 0;
      if (c->retenue == 10)
	{
	  c->n2 = c->n2 + 1;
	  c->retenue = 0;
	}
      if (c->n1 < c->n2)
	ret_s(c, s);
      else
	cond_s(c, s);
      c->i--;
      c->i2--;
      c->lmax--;
    }
}
