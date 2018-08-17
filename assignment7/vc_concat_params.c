/* ************************************ */
/*                                      */
/* vc_concat_params.c                   */  
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

char *vc_concat_params(int argc, char **argv)
{
  int count = argc;
  char *arr = malloc(sizeof argv);
  int i = 1;
  int size;
  while(i < argc)
  {
    vc_strcat(arr, argv[i]);
    size = length(arr);
    arr[size] = '\n';
    i++;
  }
  return arr;
}
