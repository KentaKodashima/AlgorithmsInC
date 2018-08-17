/* ************************************ */
/*                                      */
/* vc_strlcat.c                         */  
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

unsigned int vc_strlcat(char *dest, char *src, unsigned int size) {
  int destLength = length(dest);
  int srcLength = length(src);
  int maxCharNums = size - destLength - 1;
  int sumLength = destLength + maxCharNums;
  int i = 0;

  while(i <= maxCharNums)
  {
    dest[destLength] = src[i];
    i++;
    destLength++;
  }

  if (srcLength == size)
  {
    dest[sumLength] = '\0';
  }

  return length(dest);
}