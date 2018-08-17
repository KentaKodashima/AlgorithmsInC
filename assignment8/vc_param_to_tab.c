/* ************************************ */
/*                                      */
/* vc_param_to_tab.c                    */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>
#include "vc_stock.h"
#include "vc_show_tab.c"

static int vc_count_words(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
            str++;
        if (*str && *str != ' ' && *str != '\n' && *str != '\t')
        {
            count++;
            while (*str && *str != ' ' && *str != '\n' && *str != '\t')
                str++;
        }
    }
    return count;
}

static int vc_num_chars(char *str)
{
    int len;

    len = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
            break;
        str++;
        len++;
    }
    return len;
}

char **vc_split_whitespaces(char *str)
{
    char **split_str;
    int i;
    int j;
    int len;
    int wc;

    i = 0;
    wc = vc_count_words(str);
    if (!(split_str = (char **)malloc(sizeof(char **) * (wc + 1))))
        return NULL;
    while (*str && wc)
    {
        len = vc_num_chars(str);
        if (len > 0)
        {
            split_str[i] = (char *)malloc(sizeof(char) * (len + 1));
            for (j = 0; j < len; j++)
                split_str[i][j] = str[j];
            split_str[i++][j] = '\0';
            wc--;
        }
        str += len + 1;
    }
    split_str[i] = 0;
    return split_str;
}

char *vc_strcpy(char *dest, char *src)
{
  int srcLength = length(src);
  int i = 0;
  int j = 0;
  while (*(src + i) != '\0')
  {
    *(dest + i) = *(src + i);
    i++;
  }
  while (*(dest + j + srcLength) != '\0')
  {
    *(dest + j + srcLength) = '\0';
    j++;
  }
  return dest;
}

char *vc_strdup(char *src)
{
  int srcLength = length(src);
  char *p = malloc(srcLength+1);
  
  return vc_strcpy(p, src);
}

struct s_stock *vc_param_to_tab(int ac, char **av)
{
  int i = 0;
  int *copySize;
  copySize = (int *)malloc(sizeof (t_stock *) * ac+1);
  
  t_stock stock;
  t_stock *structP;
  structP = &stock;

  t_stock stockArr[*copySize];
  t_stock *stockArrP;
  stockArrP = stockArr;

  while(i < ac)
  {
    structP -> size_param = length(av[i]);
    structP -> str = av[i];
    structP -> copy = vc_strdup(av[i]);
    structP -> words = vc_split_whitespaces(av[i]);
    stockArrP[i] = *structP;
    i++;
  }
    // assign Empty object at the end (in order to do like "stock->size_param != 0" in the next question)
    char **dummy;
    structP -> size_param = 0;
    structP -> str = "";
    structP -> copy = "";
    structP -> words = dummy;
    stockArrP[i+1] = *structP;

  return stockArrP;
}
