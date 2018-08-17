/* ************************************ */
/*                                      */
/* vc_strncmp.c                         */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_strncmp(char *s1, char *s2, unsigned int n)
{
  int result = 0;
  for (int i = 0; i < n; i++) 
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

