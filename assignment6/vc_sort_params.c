/* ************************************ */
/*                                      */
/* vc_sort_params.c                     */
/*                                      */
/* By: Charles, EmreA, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int length(char *str)
{
  int counter = 0;
  while (*str)
  {
    str++;
    counter++;
  }
  return counter;
}

char *vc_strcpy(char *dest, const char *src)
{
  int i;

  i = 0;
  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}

int vc_charcmp(char s1, char s2)
{
  int result = 0;

  if (s1 > s2) 
  {
    result = 1;
  }
  else if (s1 < s2)
  {
    result = -1;
  }
  return result;
}

void vc_swapchar(char *a, char *b) 
{
  char temp = *a;
 	*a = *b;
 	*b = temp;
}

int main(int argc, char const *argv[])
{
  int i;
  int j;
  int k;
  int size;
  int result;
  char dest[100];
  char *p;
  int counter;

  p = dest;

  for (i = 1; i < argc; i++) 
  {
    vc_strcpy(p, argv[i]);
    size = length(p);
    for (j = 0; j < size-1; j++)
    {
      for (k = j + 1; k < size; k++)
      {
        result = vc_charcmp(p[j], p[k]);
        if (result == 1)
        {
          vc_swapchar(&p[j], &p[k]);
        }
      }
    }
    printf("argv[%d] = \"%s\"\n", i, p);
  }
  return 0;
}