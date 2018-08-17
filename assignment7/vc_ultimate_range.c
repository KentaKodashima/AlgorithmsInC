/* ************************************ */
/*                                      */
/* vc_ultimate_range.c                  */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

int length(int *src) 
{
  int counter = 0;
  while(*src)
  {
    counter++;
    src++;
  }
  return counter;
}

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

int vc_ultimate_range(int **range, int min, int max)
{
  int size = rangeSize(min, max);
  int rangeLength;
  int *intArr = malloc(size+1);
  range = &intArr;
  int i = 0;

  while(min < max)
  {
    *(intArr+i) = min;
    i++;
    min++;
  }

  rangeLength = length(*range);
  if (min > max)
  {
    range = NULL;
  }

  return rangeLength;
}