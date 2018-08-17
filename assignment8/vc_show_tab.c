/* ************************************ */
/*                                      */
/* vc_show_tab.c                        */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>
#include "vc_stock.h"

int charToNum(char ch)
{
  return ch + 48;
}

int length(char *src)
{
  int counter = 0;
  while(*src)
  {
    counter++;
    src++;
  }
  return counter;
}

void vc_show_tab(struct s_stock *stock)
{
  int i = 0;
  int j = 0;
  int counter;

  while(stock->size_param != 0)
  {
    putchar(charToNum(stock->size_param));
    for (j = 0; j < length(stock->copy); j++)
    {
      putchar(stock->copy[j]);
    }
    for (j = 0; j < length(stock->words[i]); j++)
    {
      putchar(stock->words[i][j]);
    }
    stock++;
    i++;
  }
}
