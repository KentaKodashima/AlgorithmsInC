/* ************************************ */
/*                                      */
/* vc_foreach.c                         */
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>

void test(int num)
{
  printf("%d\n", num);
}

void vc_foreach(int *tab, int length, void (*f)(int))
{
  int i = 0;
  while (i < length)
  {
    (*f)(tab[i]);
    i++;
  }
}