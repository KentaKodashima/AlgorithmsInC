/* ************************************ */
/*                                      */
/* vc_recursive_power.c                 */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
int vc_recursive_power(int n, int power)
{
  static int result;

  if (power == 1) 
  {
    return n;
  }
  else if (power < 1)
  {
    return 0;
  }
  
  result = n * vc_recursive_power(n, power-1);

  return result;
}