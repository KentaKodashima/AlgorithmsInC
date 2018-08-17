/* ************************************ */
/*                                      */
/* vc_convert_base.c                    */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

int rangeSize(int min, int max)
{
  int size = 0;
  while(min < max)
  {
    size++;
    min++;
  }
  return size;
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

int vc_strcmp(char *s1, char *s2)
{
  int result = 0;
  int s1Size = length(s1);
  int s2Size = length(s2);
  for (int i = 0; i < s1Size; i++) 
  {
    if (s1[i] > s2[i]) 
    {
      result = 1;
      break;
    }
    else if (s1[i] < s2[i])
    {
      result = -1;
      break;
    }
  }
  return result;
}

void decToHexInAscii(int dec)
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

void decToOctalInAscii(int dec)
{
  if (dec % 8 < 10)
  {
    putchar(dec / 8 + 48);
    putchar(dec % 8 + 48);
  }
  else
  {
    putchar(dec / 8 + 48);
    putchar(dec % 8 + 87);
  }
}

void decToBinaryInAscii(int dec)
{
  if (dec % 2 < 10)
  {
    putchar(dec / 2 + 48);
    putchar(dec % 2 + 48);
  }
  else
  {
    putchar(dec / 2 + 48);
    putchar(dec % 2 + 87);
  }
}

char *vc_convert_base(char *nbr, char *base_from, char *base_to)
{
  int i;
  int nbrSize = length(nbr);
  int baseFromSize = length(base_from);
  int baseToSize = length(base_to);

  if (vc_strcmp(base_from, "10") == 0)
  {
    if (vc_strcmp(base_to, "16") == 0)
    {
      for (i = 0; i < nbrSize; i++)
      {
        decToHexInAscii(nbr[i]);
      }
    } 
    else if (vc_strcmp(base_to, "8") == 0)
    {
      for (i = 0; i < nbrSize; i++)
      {
        decToOctalInAscii(nbr[i]);
      }
    }
    else if (vc_strcmp(base_to, "2") == 0)
    {
      for (i = 0; i < nbrSize; i++)
      {
        decToBinaryInAscii(nbr[i]);
      }
    }
  }
  return 0;
}