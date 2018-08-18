/* ************************************ */
/*                                      */
/* vc_any.c                             */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int getRowSize(char **tab)
{
  int i = 0;
  int counter = 0;
  while (*tab)
  {
    counter++;
    tab++;
  }
  return counter;
}

int getColSize(char *tab)
{
  int i = 0;
  int counter = 0;
  while (*tab)
  {
    counter++;
    tab++;
  }
  return counter;
}

int test(char *str)
{
  int i;
  int length = getColSize(str);
  int result = 1;
  for (i = 0; i < length; i++)
  {
    if ((str[i] > 48) && (str[i] < 58))
    {
      result = 1;
      break;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}

int vc_any(char **tab, int (*f)(char *))
{
  int result = 1;
  int rowSize = getRowSize(tab);
  int colSize;
  int i = 0;
  int j = 0;
  while (i < rowSize)
  {
    colSize = getColSize(tab[i]);
    for (j = 0; j < colSize; j++)
    {
      if ((*f)(tab[i]) == 1)
      {
        result = 1;
        i = rowSize;
        break;
      }
      else
      {
        result = 0;
      }
    }
    i++;
  }

  return result;
}

int main(int argc, char const *argv[])
{
  char *tab[4] = {"Hello", "wor2ld", "hey", 0};
  int (*p)(char *);
  p = &test;

  printf("%d\n", vc_any(tab, p));

  return 0;
}