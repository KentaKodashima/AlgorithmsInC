/* ************************************ */
/*                                      */
/* vc_iterative_power.c                 */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
int iterative_power(int n, int power) 
{
  int result = n;
  if (n < 0) 
  {
    result = 0;
  }
  for (int i = 1; i < power; i++)
  {
    result *= n; 
  }
  return result;
}
