
/* ************************************ */
/*                                      */
/* vc_ptstr.c                           */
/*                                      */
/* By: Juan, Kenta, Natsumi             */
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