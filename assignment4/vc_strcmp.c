/* ************************************ */
/*                                      */
/* vc_strcmp.c                          */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
int length(char *str) {
  int counter = 0;
  while (*str)
  {
    str++;
    counter++;
  }
  return counter;
}

int vc_strcmp(char *s1, char *s2)
{
  int result = 0;
  int s1Size = length(s1);
  int s2Size = length(s2);
  for (int i = 0; i < s1Size; i++) 
  {
    if (s1[i] > s2[i]) 
    {
      result = 1;
      break;
    }
    else if (s1[i] < s2[i])
    {
      result = -1;
      break;
    }
  }
  return result;
}
