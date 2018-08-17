/* ************************************ */
/*                                      */
/* vc_is_prime.c                        */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
int vc_find_next_prime(int n)
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
  if (result == 0) {
    return vc_find_next_prime(n+1);
  }

  return n;
}
