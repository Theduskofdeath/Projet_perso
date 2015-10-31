/*
** mult.c for multi in /home/marie-_j/rendu/Projet_Perso/BS
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Fri Oct 30 17:21:28 2015 Jean-Denis Marie-Sainte
** Last update Fri Oct 30 18:21:36 2015 Jean-Denis Marie-Sainte
*/

#include <stdlib.h>
#include "common.h"

void	ret_m(t_calc *c, char *s)
{
  printf("%d\n", c->retenue);
  c->tmp = (c->n1 * c->n2) + c->retenue;
  c->tmp = c->tmp % 10;
  c->retenue = (c->n1 * c->n2) / 10;
  *s = c->tmp + '0';
  c->str = add_to_str(c->str, *s);
}

    void	cond_m(t_calc *c, char *s)
    {
      c->tmp = (c->n1 * c->n2) + c->retenue;
      *s = c->tmp + '0';
      c->str = add_to_str(c->str , *s);
    }

  void		calc_m(char *nb1, char *nb2)
  {
    t_calc	c;
    char		s;

    c.str = NULL;
    c.i = my_strlen(nb1) - 1;
    c.i2 = my_strlen(nb2) - 1;
    c.retenue = 0;
    while (nb2[c.i2] != 0)
      {
	c.n2 = my_getc(nb2[c.i2]);
	c.i2--;
	while (nb1[c.i] != 0)
	  {
	    c.n1 = my_getc(nb1[c.i]);
	    c.i--;
	    if ((c.n1 * c.n2) >= 10)
	      ret_m(&c, &s);
	    else
	      cond_m(&c, &s);
	  }
      }
    /* if (c.retenue != 0) */
    /*   { */
    /* 	s = c.retenue + '0'; */
    /* 	c.str = add_to_str(c.str, s); */
    /*   } */
    my_putstr(my_rev_str(c.str));
  }
