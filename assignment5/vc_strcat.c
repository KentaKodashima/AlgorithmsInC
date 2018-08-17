/* ************************************ */
/*                                      */
/* vc_strcat.c                          */
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

char *vc_strcat(char *dest, char *src)
{
  int destLength = length(dest);
  int srcLength = length(src);
  int sumLength = destLength + srcLength;
  int counter = 0;

  while(destLength < sumLength + 1) 
  {
    dest[destLength] = src[counter];
    counter++;
    destLength++;
  }

  return dest;
}
