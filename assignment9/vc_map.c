/* ************************************ */
/*                                      */
/* vc_map.c                             */
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int test(int num)
{
  return num * 2;
}

int *vc_map(int *tab, int length, int (*f)(int))
{
  int i = 0;
  while (i < length)
  {
    tab[i] = (*f)(tab[i]);
    i++;
  }
  return tab;
}