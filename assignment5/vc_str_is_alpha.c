/* ************************************ */
/*                                      */
/* vc_str_is_alpha.c                    */
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

int vc_str_is_alpha(char *str)
{
  int result = 1;
  int counter = 0;

  while (*str)
  {
    if (*str < 65 || (*str > 90 && *str < 97) || *str > 122)
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
