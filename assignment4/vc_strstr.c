/* ************************************ */
/*                                      */
/* vc_strstr.c                          */
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

char *vc_strstr(char *str, char *to_find)
{
  int strSize = length(str);
  int findSize = length(to_find);
  for (int i = 0; i < strSize; i++)
  {
    if (*(str+i) == to_find[0])
    {
      for (int j = 0; j < findSize; j++) 
      {
        if (*(str+i) == to_find[j]) {

        }
      }
    }
  }
  return str;
}
