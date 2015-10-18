/*
** common.h for common in /home/marie-_j
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Fri Sep 18 16:53:28 2015 Jean-Denis Marie-Sainte
// Last update Thu Oct 15 12:19:51 2015 Jean-Denis Marie-Sainte
*/

#ifndef COMMON_H
# define COMMON_H

int	my_strlen(char *str);
int	my_getnbr(char *str);
char	*my_rev_str(char *str);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_puterr(char *str);

typedef struct	s_calc
{
  int		retenue;
  int		nb1;
  int		nb2;
}		t_calc;

typedef struct	s_stnbr
{
  char		*tnb1;
  char		*tnb2;
}		t_stnbr;

#endif /* !COMMON_H */
