/* ************************************ */
/*                                      */
/* vc_putnbr.c                          */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_putnbr(int nb)
{
  if (nb < 0)
  {
    nb = -nb;
    putchar('-');
  }

  if (nb < 10)
  {
    // '0' == int 48
    putchar(nb + '0');
  }
  else
  {
    vc_putnbr(nb / 10);
    vc_putnbr(nb % 10);
  }
}