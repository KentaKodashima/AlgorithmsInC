/* ************************************ */
/*                                      */
/* vc_strlcpy.c                         */  
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

unsigned int vc_strlcpy(char *dest, char *src, unsigned int size)
{
  int destLength = length(dest);
  int srcLength = length(src);
  int maxCharNums = size - 1;
  int i = 0;

  while(i <= maxCharNums) 
  {
    dest[i] = src[i];
    i++;
  }

  if (srcLength == size)
  {
    dest[maxCharNums] = '\0';
  }

  return length(dest);
}