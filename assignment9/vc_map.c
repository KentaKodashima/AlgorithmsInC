/* ************************************ */
/*                                      */
/* vc_map.c                             */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int test(int num)
{
  return num * 2;
}

int *vc_map(int *tab, int length, int (*f)(int))
{
  int i = 0;
  while (i < length)
  {
    tab[i] = (*f)(tab[i]);
    i++;
  }
  return tab;
}

int main(int argc, char const *argv[])
{
  int arr[3] = {48, 50, 56};
  int (*p)(int);
  p = &test;
  int *tab = vc_map(arr, 3, p);
  printf("%d\n", tab[0]);
  printf("%d\n", tab[1]);

  return 0;
}