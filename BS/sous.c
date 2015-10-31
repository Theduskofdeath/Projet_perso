/*
** sous.c for soustraction in /home/marie-_j/rendu/Projet_Perso/BS
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Tue Oct 27 16:54:26 2015 Jean-Denis Marie-Sainte
** Last update Fri Oct 30 16:53:48 2015 Jean-Denis Marie-Sainte
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

/* void		checkin(char *nb1, char *nb2, t_calc *c) */
/* { */
/*   int		len; */
/*   int		len2; */
/*   int		tmp; */

/*   len = 0; */
/*   len2 = 0; */
/*   tmp = 0; */
/*   if (nb1[0] == '-') */
/*     c->i--; */
/*   if (nb2[0] == '-') */
/*     c->i2--; */
/*   if (c->i2 > c->i) */
/*     tmp = c->i2; */
/*   else */
/*     tmp = c->i; */
/*   while (tmp >= 0) */
/*     { */
/*     } */
/*   if (c->i < c->i2) */
/*     if (c->i == c->i2) */
/*       { */
/* 	if (nb1[len] == '-') */
/* 	  len++; */
/* 	else if (nb2[len2] == '-') */
/* 	  len2++; */
/* 	while (nb1[len] != '\0') */
/* 	  { */
/* 	    c->n1 = my_getc(nb1[len]); */
/* 	    c->n2 = my_getc(nb2[len2]); */
/* 	    if (c->n2 > c->n1) */
/* 	      { */
/* 		c->str = nb1; */
/* 		nb1 = nb2; */
/* 		nb2 = c->str; */
/* 		c->str = NULL; */
/* 		c->str = add_to_str(c->str, '-'); */
/* 		return ; */
/* 	      } */
/* 	    len++; */
/* 	  } */
/*       } */
/* } */

  void		calc_s(char *nb1, char *nb2)
  {
    t_calc	c;
    char		s;

    atrib_s(&c, nb1, nb2);
    while (nb1[c.i] != 0)
      {
	c.n1 = my_getc(nb1[c.i]);
	c.n2 = my_getc(nb2[c.i2]);
	c.i--;
	c.i2--;
	if (c.retenue == 10)
	  {
	    c.n2 = c.n2 + 1;
	    c.retenue = 0;
	  }
	if (c.n1 < c.n2)
	  ret_s(&c, &s);
	else
	  cond_s(&c, &s);
      }
    my_putstr(my_rev_str(c.str));
  }
