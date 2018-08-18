/* ************************************ */
/*                                      */
/* calc.c                               */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include "./includes/libex6.h"

int length(char *str)
{
  int counter;
  while (*str)
  {
    counter++;
    str++;
  }
  return counter;
}

void calc(char *val1, char *opt, char *val2)
{
  int result = 0;
  int val1Int = vc_atoi(val1);
  int val2Int = vc_atoi(val2);

  printf("%d\n", val1Int);

  if (opt[0] == '+')
  {
    result = val1Int + val2Int;
    // printf("%d\n", result);
  }
  else if (opt[0] == '-')
  {
    result = val1Int - val2Int;
  }
  else if (opt[0] == '*')
  {
    result = val1Int * val2Int;
  }
  else if (opt[0] == '/')
  {
    result = val1Int / val2Int;
  }
  else if (opt[0] == '%')
  {
    result = val1Int % val2Int;
  }

  if (length(opt) > 1)
  {
    result = 0;
  }

  vc_putnbr(result);
}

int main(int argc, char *argv[])
{

  calc(argv[0], argv[1], argv[2]);

  return 0;
}
