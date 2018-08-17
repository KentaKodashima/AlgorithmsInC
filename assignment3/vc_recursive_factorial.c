/* ************************************ */
/*                                      */
/*  vc_recursive_factorial.c            */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
int vc_recursive_factorial(int n) 
{
  static int result;

  if (n == 1)
  {
    return 1;
  }
  else if (n < 1)
  {
    return 0;
  }

  result = n * vc_recursive_factorial(n-1);

  return result;
}