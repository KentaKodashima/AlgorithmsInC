/* ************************************ */
/*                                      */
/* vc_strlowcase.c                      */
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

char *vc_strlowcase(char *str)
{
  int strSize = length(str);
  for (int i = 0; i < strSize; i++)
  {
    if (str[i] <= 90 && str[i] >= 65) {
      str[i] = str[i] + 32;
    }
  }
  return str;
}
