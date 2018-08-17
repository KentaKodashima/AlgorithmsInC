/* ************************************ */
/*                                      */
/* vc_rev_params.c                      */
/*                                      */
/* By: Charles, EmreA, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;

  for (i = argc-1; i > 0; i--)
  {
    printf("argv[%d] = \"%s\"\n", i, argv[i]);
  }
  return 0;
}