/* ************************************ */
/*                                      */
/* vc_is_prime.c                        */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
int vc_is_prime(int n)
{
  int result = 1;
  for (int i = 1; i < n; i++) 
  {
    for (int j = n-1; j > 0; j--) 
    {
      if (i * j == n) 
      {
        result = 0;
      }
    }
  }
  if (n == 0 || n == 1) 
  {
    result = 0;
  }
  return result;
}
