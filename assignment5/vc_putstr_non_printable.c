/* ************************************ */
/*                                      */
/* vc_putstr_non_printable.c            */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int length(char *str) {
  int counter = 0;
  while(*str)
  {
    counter++;
    str++;
  }
  return counter;
}

void vc_putstr_first_16(char *str)
{
  if (*str <= 15)
  {
    putchar('\\');
    putchar('0');
    if (*str <= 9)
    {
      putchar(*str+48);
    }
    else
    {
      putchar(*str+87);
    }
  }
}

void vc_putstr_last_16(char *str)
{
  if ((*str > 15) && (*str < 32))
  {
    putchar('\\');
    putchar('1');
    if ((*str > 15) && (*str < 26))
    {
      putchar(*str+32);
    }
    else
    {
      putchar(*str+71);
    }
  }
}

void vc_putstr_non_printable(char *str)
{
  int i = 0;
  while(*str)
  {
    vc_putstr_first_16(str);
    vc_putstr_last_16(str);

    if (*str > 31)
    {
      putchar(*str);
    }
    str++;
  }
}