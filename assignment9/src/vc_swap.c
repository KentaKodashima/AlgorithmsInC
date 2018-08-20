/* ************************************ */
/*                                      */
/* vc_swap.c                            */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
