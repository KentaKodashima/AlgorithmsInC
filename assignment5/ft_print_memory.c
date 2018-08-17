/* ************************************ */
/*                                      */
/* ft_print_memory.c                    */  
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

void decToHexInAscii(int dec)
{
  if ((dec / 16) > 16) 
  {
    putchar('0');
  }
  else
  {
    if (dec % 16 < 10)
    {
      putchar(dec / 16 + 48);
      putchar(dec % 16 + 48);
    }
    else
    {
      putchar(dec / 16 + 48);
      putchar(dec % 16 + 87);
    }
  }
}

void ft_print_memory(void *addr, unsigned int size)
{
  char *p = addr;
  char *q = addr;
  int rowSize = size / 16 + 1;
  int colSize = 17;
  int twoDimenArr[rowSize][colSize];
  
  while(*p) // (char *)addr
  {
    for (int i = 0; i < rowSize; i++)
    {
      for (int j = 0; j < colSize - 1; j++)
      {
        twoDimenArr[i][j] = *p;
      }
    }
    p++;
  }

  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize - 1; j++)
    {
      decToHexInAscii(twoDimenArr[i][j]);
    }
  }
}