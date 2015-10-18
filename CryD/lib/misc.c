/*
** misc.c for misc in /home/marie-_j/rendu/Projet_Perso/CryD/lib
** 
** Made by Jean-Denis Marie-Sainte
** Login   <marie-_j@epitech.eu>
** 
** Started on  Fri May 29 16:44:39 2015 Jean-Denis Marie-Sainte
** Last update Fri May 29 16:54:44 2015 Jean-Denis Marie-Sainte
*/

#include <unistd.h>
#include "../header/cryd.h"


void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_puterr(char *str)
{
  write(2, str, my_strlen(str));
}
