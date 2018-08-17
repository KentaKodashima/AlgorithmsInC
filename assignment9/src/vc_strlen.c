
/* ************************************ */
/*                                      */
/* vc_strlen.c                          */
/*                                      */
/* By: Charles, EmreA, Kenta            */
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