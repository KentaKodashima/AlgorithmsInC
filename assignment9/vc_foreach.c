/* ************************************ */
/*                                      */
/* vc_foreach.c                         */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void test(int num)
{
  printf("%d\n", num);
}

void vc_foreach(int *tab, int length, void (*f)(int))
{
  int i = 0;
  while (i < length)
  {
    (*f)(tab[i]);
    i++;
  }
}

int main(int argc, char const *argv[])
{
  int arr[3] = {48, 50, 56};
  void (*p)(int);
  p = &test;
  vc_foreach(arr, 3, p);

  return 0;
}