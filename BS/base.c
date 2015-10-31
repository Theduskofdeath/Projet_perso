/*
** base.c for base in /home/marie-_j/rendu/Projet_perso/BS/
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Thu Oct 15 12:13:35 2015 Jean-Denis Marie-Sainte
** Last update Fri Oct 30 17:33:45 2015 Jean-Denis Marie-Sainte
*/

#include <stdlib.h>
#include <unistd.h>
#include "common.h"

int	my_getnbr(char *str)
{
  int	i;
  int	sign;
  int	number;
  int	number2;

  number = 0;
  i = 0;
  sign = 1;
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	sign = -1 * sign;
      i = i + 1;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      number = number * 10 + (str[i] - '0');
      number2 = number * 10 + (str[i] - 48);
      if (number2 < number )
	return (0);
      i = i + 1;
    }
  return (number * sign);
}

int	my_getc(char c)
{
  return (c - 48);
}

char	*add_to_str(char *str, char c)
{
  int	i;
  char	*tmp;

  i = 0;
  tmp = str;
  if ((str = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
    return (tmp);
  if (tmp != NULL)
    while (tmp[i] != '\0')
      {
	str[i] = tmp[i];
	i++;
      }
  str[i++] = c;
  str[i] = '\0';
  if (tmp != NULL)
    free(tmp);
  return (str);
}

int	main(int ac, char **av)
{
  calc_m(av[1], av[2]);
  //printf("%i\n", my_getc(av[1][0]));
  return (0);
}
