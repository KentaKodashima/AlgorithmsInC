/* ************************************ */
/*                                      */
/* vc_iterative_factorial.c             */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
int vc_iterative_factorial(int n) 
{
  int result = 1;
  if (n < 0) 
  {
    result = 0;
  }
  for (int i = 1; i <= n; i++) 
  {
    result *= i; 
  }
  return result;
}
