/* ************************************ */
/*                                      */
/* vc_swap.c                        */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

void vc_swap(int *a, int *b)
{
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
