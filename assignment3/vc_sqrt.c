/* ************************************ */
/*                                      */
/* vc_sqrt.c                            */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
int vc_sqrt(int n)
{
  int result;
  if (n < 0) {
    result = 0;
  }
  for (int i = 0; i < n/2; i++) {
     if (i * i == n) {
       result = i;
     }
  }
  return result;
}

int main()
{ 
  printf("%d\n", vc_sqrt(-10));
  printf("%d\n", vc_sqrt(10));
  printf("%d\n", vc_sqrt(16));
  return 0;
}
