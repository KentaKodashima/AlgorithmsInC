/* ************************************ */
/*                                      */
/* vc_strcapitalize.c                   */
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

char *vc_strcapitalize(char *str)
{
  int strSize = length(str);
  for (int i = 0; i < strSize; i++)
  {
    if (str[i] <= 90 && str[i] >= 65)
    {
      str[i] = str[i] + 32;
    }
    if (((str[i] >= 97) && (str[i] < 123)) && i == 0)
    {
      str[i] = str[i] - 32;
    }
    if (((str[i-1] < 65) || (str[i-1] > 90 && str[i-1] < 97) || (str[i-1] > 122)) && ((str[i] >= 97) && (str[i] < 123))) 
    {
      str[i] = str[i] - 32;
    }
  }
  return str;
}
