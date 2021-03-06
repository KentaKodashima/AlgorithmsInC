/* ************************************ */
/*                                      */
/* vc_str_is_numeric.c                  */
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int is_empty(char *str)
{
  int result = 1;
  if (str == NULL)
  {
    result = 0;
  }
  else if (str[0] == '\0')
  {
    result = 0;
  }
  return result;
}

int vc_str_is_numeric(char *str)
{
  int result = 1;

  while(*str) {
    if ((*str < 48) || (*str > 57)) 
    {
      result = 0;
      break;
    }
    str++;
  }

  if (is_empty(str) == 0)
  {
    result = 1;
  }

  return result;
}

