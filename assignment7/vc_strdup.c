/* ************************************ */
/*                                      */
/* vc_strdup.c                          */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

int length(char *src) 
{
  int counter = 0;
  while(*src)
  {
    counter++;
    src++;
  }
  return counter;
}

char *vc_strcpy(char *dest, char *src)
{
  int srcLength = length(src);
  int i = 0;
  int j = 0;
  while (*(src + i) != '\0') // Copying
  {
    *(dest + i) = *(src + i);
    i++;
  }
  while (*(dest + j + srcLength) != '\0') // Filling the rest with '\0'
  {
    *(dest + j + srcLength) = '\0';
    j++;
  }
  return dest;
}

char *vc_strdup(char *src)
{
  int srcLength = length(src);
  char *p = malloc(srcLength+1); // + 1 is for \0
  
  return vc_strcpy(p, src);
}
