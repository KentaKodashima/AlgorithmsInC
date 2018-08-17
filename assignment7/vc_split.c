/* ************************************ */
/*                                      */
/* vc_split.c                           */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

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

int separatorNums(char *str, char *charset) 
{
  int counter = 0;
  int i = 0;
  int charsetSize = length(charset);
  while(*str)
  {
    for (i = 0; i < charsetSize; i++)
    {
      if (*str == charset[i])
      {
        counter++;
      }
    }
    str++;
  }
  return counter;
}

int vc_strcmp_ver2(char *s1, char *s2)
{
  int result = 0;
  int counter = 0;
  int i;
  int j;
  int s1Size = length(s1);
  int s2Size = length(s2);
  for (i = 0; i < s1Size; i++) 
  {
    for (j = 0; j < s2Size; j++)
    {
      if (s1[i] == s2[j]) 
      {
        result = 1;
        break;
      }
    }
  }
  return result;
}

char **vc_split(char *str, char *charset)
{
  char **arrP;
  int counter = 0;
  int size = length(str);
  int rowSize = separatorNums(str, charset);
  int i;
  int j;
  
  // Setting the array[][] size
  *arrP = malloc(sizeof rowSize);
  for (i = 0; i < size; i++)
  {
    arrP[i] = malloc(sizeof(int*) * size);
  }
  
  for (i = 0; i < rowSize; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (str[counter] == charset)
      {
        counter++;
        arrP[i][j] = '\0';
        break;
      }
      if (counter == size)
      {
        arrP[i][j] = '\0';
      }
      else
      {
        arrP[i][j] = str[counter];
        counter++;
      }
    }
    printf("arrP[%d] = \"%s\"\n", i, arrP[i]);
  }
  arrP[rowSize] = NULL;

  return arrP;
}