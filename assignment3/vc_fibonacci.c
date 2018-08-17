/* ************************************ */
/*                                      */
/* vc_fibonacci.c                       */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
int vc_fibonacci(int n)
{
  static int result;
  if(n == 0)
  {
    return 0;
  }
  else if(n == 1)
  {
    return 1;
  }
  else if(n < 0)
  {
    return -1;
  }
   
  result = vc_fibonacci(n - 1) + vc_fibonacci(n - 2);

  return result;
}
