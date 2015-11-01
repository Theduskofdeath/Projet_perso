/*
** common.h for common in /home/marie-_j
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Fri Sep 18 16:53:28 2015 Jean-Denis Marie-Sainte
// Last update Sun Nov  1 20:14:04 2015 Jean-Denis Marie-Sainte
*/

#ifndef COMMON_H_
# define COMMON_H_

# define S_ERR_MSG "Syntax error\n"
# define ERR_MSG "Error\n"

typedef struct	s_calc
{
  int		retenue;
  int		n1;
  int		n2;
  int		i;
  int		i2;
  int		tmp;
  int		lmax;
  char		*str;
  char		*s_tmp;
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
char	*get_expr(unsigned size);
char	*calc(char *nb1, char *nb2);
char	*calc_m(char *nb1, char *nb2);
char	*calc_s(char *nb1, char *nb2);
char	*eval_expr(char *base, char *ops, char *expr, unsigned int size);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_puterr(char *str);
void	ret(t_calc *c, char *s);
void	ret_s(t_calc *c, char *s);
void	ret_m(t_calc *c, char *s);
void	cond(t_calc *c, char *s);
char	*cond_s(t_calc *c, char *s);
void	cond_m(t_calc *c, char *s);
void	check_base(char *base);
void	check_ops(char *ops);
void	algo_calc(t_calc *c, char *nb1, char *nb2, char *s);
void	algo_calc_s(t_calc *c, char *nb1, char *nb2, char *s);

#endif /* !COMMON_H_ */
