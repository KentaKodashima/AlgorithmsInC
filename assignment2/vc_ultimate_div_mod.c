
/* ************************************ */
/*                                      */
/* vc_ultimate_div_mod.c                */
/*                                      */
/* By: Juan, Kenta, Natsumi             */
/*                                      */
/* ************************************ */

#include <stdio.h>
void vc_ultimate_div_mod(int *a, int *b) 
{
  int result = *a / *b;
  int remaind = *a % *b;

  *a = result;
  *b = remaind;
}

