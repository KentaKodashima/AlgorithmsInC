/* ************************************ */
/*                                      */
/* vc_strcpy.c                          */
/*                                      */
/* By: Sue, Minami, Kenta               */
/*                                      */
/* ************************************ */

#include <stdio.h>
char *vc_strcpy(char *dest, char *src)
{
  dest = src;

  return dest;
}

int main()
{
  char str1[16] = "Hello World!";
  char str2[16];
  char *ptr1, *ptr2;
  ptr1 = str1;

  puts(vc_strcpy(ptr2, ptr1));
}
