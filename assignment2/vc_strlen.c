
/* ************************************ */
/*                                      */
/* vc_strlen.c                          */
/*                                      */
/* By: Juan, Kenta, Natsumi             */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_strlen(char *str) 
{
  int counter = 0;
  while (*str)
  {
    str++;
    counter++;
  }
  return counter;
}