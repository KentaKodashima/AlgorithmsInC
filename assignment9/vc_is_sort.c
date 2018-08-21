/* ************************************ */
/*                                      */
/* vc_is_sort.c                         */
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int testSort(int num, int num2)
{
  int result = 1;
  if (num > num2)
  {
    result = -1;
  }
  else
  {
    result = 0;
  }
  return result;
}

int vc_is_sort(int *tab, int length, int (*f)(int, int))
{
  int result = 1;
  int i = 0;
  while (i < length - 1)
  {
    if ((*f)(tab[i], tab[i + 1]) != 0)
    {
      result = 0;
      i = length - 1;
      break;
    }
    else
    {
      result = 1;
    }
    i++;
  }

  return result;
}