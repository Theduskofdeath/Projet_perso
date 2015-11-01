/*
** core.c for core file in /home/marie-_j/rendu/Projet_Perso/BS
**
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.net>
**
** Started on  Sun Nov  1 19:24:07 2015 Jean-Denis Marie-Sainte
** Last update Sun Nov  1 20:12:49 2015 Jean-Denis Marie-Sainte
*/

#include <stdlib.h>
#include "common.h"

char	**add_to_tab(char **tab, char *str)
{
  int	i;
  char	**tmp;

  i = 0;
  if (tab != NULL)
    while (tab[i] != NULL)
      i++;
  if ((tmp = malloc(sizeof(char *) * (i + 2))) == NULL)
    return (tab);
  i = 0;
  if (tab != NULL)
    while (tab[i] != NULL)
      {
        tmp[i] = tab[i];
	i++;
      }
  tmp[i] = str;
  tmp[i + 1] = NULL;
  if (tab != NULL)
    free(tab);
  return (tmp);
}

char	**my_strtowordtab(char *str)
{
  int	i;
  char	*tmp;
  char	**tab;

  tmp = NULL;
  tab = NULL;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	tmp = add_to_str(tmp, str[i]);
      else if (tmp != NULL)
	{
	      tab = add_to_tab(tab, tmp);
	      tmp = NULL;
	}
      i++;
    }
  if (tmp != NULL)
    tab = add_to_tab(tab, tmp);
  return (tab);
}

char	*eval_expr(char *base, char *ops, char *expr, unsigned int size)
{
  char	**tab;
  char	*str;
  int	i;

  i = 0;
  tab = my_strtowordtab(expr);
  str = calc(tab[0], tab[1]);
  return (str);
}
