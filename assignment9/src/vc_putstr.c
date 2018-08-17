
/* ************************************ */
/*                                      */
/* vc_ptstr.c                           */
/*                                      */
/* By: Charles, EmreA, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>
void vc_putstr(char *str) 
{
  while (*str) 
  {
    putchar(*str++);
  }
}