/* ************************************ */
/*                                      */
/* main.c (Testing purposes)            */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include "./includes/libvc.h"

int main(int argc, char const *argv[])
{
  char *str = "Hello";

  int result;
  result = vc_strlen(str);

  printf("%d\n", result);

  return 0;
}
