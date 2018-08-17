/* ************************************ */
/*                                      */
/* vc_div_mod.c                         */
/*                                      */
/* By: Juan, Kenta, Natsumi             */
/*                                      */
/* ************************************ */

#include <stdio.h>
void vc_div_mod(int a, int b, int *div, int *mod) 
{
  int result = (a / b);
  int remaind = (a % b);
  *div = result;
  *mod = remaind;
}
