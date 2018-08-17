/* ************************************ */
/*                                      */
/* vc_range.c                           */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

int rangeSize(int min, int max)
{
  int size = 0;
  while(min < max)
  {
    size++;
    min++;
  }
  return size;
}

int *vc_range(int min, int max)
{
  int size = rangeSize(min, max);
  int *intArr = (int *)malloc(size+1);
  int i = 0;
  while(min < max)
  {
    *(intArr+i) = min;
    i++;
    min++;
  }

  if (min > max)
  {
    intArr = NULL;
  }
  return intArr;
}