/* ************************************ */
/*                                      */
/* vc_putstr.c                          */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
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