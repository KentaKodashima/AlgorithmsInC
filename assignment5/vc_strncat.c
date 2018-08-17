/* ************************************ */
/*                                      */
/* vc_strncat.c                         */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int length(char *str) {
  int counter = 0;
  while(*str)
  {
    counter++;
    str++;
  }
  return counter;
}

char *vc_strncat(char *dest, char *src, int n)
{
  int destLength = length(dest);
  int srcLength = length(src);
  int sumLength = destLength + n;
  int counter = 0;

  while(destLength < sumLength) 
  {
    dest[destLength] = src[counter];
    counter++;
    destLength++;
  }

  if (srcLength == n)
  {
    dest[sumLength] = '\0';
  }

  return dest;
}