
/* ************************************ */
/*                                      */
/* vc_swap.c                            */
/*                                      */
/* By: Juan, Kenta, Natsumi             */
/*                                      */
/* ************************************ */

#include <stdio.h>
void vc_swap(int *a, int *b) 
{
  int temp = *a;
 	*a = *b;
 	*b = temp;
}
