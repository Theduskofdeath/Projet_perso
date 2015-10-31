/*
** common.h for common in /home/marie-_j
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Fri Sep 18 16:53:28 2015 Jean-Denis Marie-Sainte
// Last update Fri Oct 30 17:33:25 2015 Jean-Denis Marie-Sainte
*/

#ifndef COMMON_H
# define COMMON_H

typedef struct	s_calc
{
  int		retenue;
  int		n1;
  int		n2;
  int		i;
  int		i2;
  int		tmp;
  char		*str;
}		t_calc;

typedef struct	s_stnbr
{
  char		*tnb1;
  char		*tnb2;
}		t_stnbr;

int	my_strlen(char *str);
int	my_getnbr(char *str);
int	my_getc(char c);
char	*my_rev_str(char *str);
char	*add_to_str(char *str, char c);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_puterr(char *str);
void	calc(char *nb1, char *nb2);
void	calc_s(char *nb1, char *nb2);
void	calc_m(char *nb1, char *nb2);
void	ret(t_calc *c, char *s);
void	ret_s(t_calc *c, char *s);
void	ret_m(t_calc *c, char *s);
void	cond(t_calc *c, char *s);
void	cond_s(t_calc *c, char *s);
void	cond_m(t_calc *c, char *s);

#endif /* !COMMON_H */
