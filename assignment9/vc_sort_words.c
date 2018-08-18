/* ************************************ */
/*                                      */
/* vc_sort_words.c                      */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

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

int vc_strcmp(char *s1, char *s2)
{
  int result = 0;
  int s1Size = length(s1);
  int s2Size = length(s2);
  for (int i = 0; i < s1Size; i++)
  {
    if (s1[i] > s2[i])
    {
      result = 1;
      break;
    }
    else if (s1[i] < s2[i])
    {
      result = -1;
      break;
    }
  }
  return result;
}

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

int testSort(int num, int num2)
{
  int result = 1;
  if (num > num2)
  {
    result = -1;
  }
  else
  {
    result = 0;
  }
  return result;
}

void vc_sort_words(char **words)
{
  int i = 0;
  int rowSize = getRowSize(words) - 1;
  while (i < rowSize)
  {
    if (words[i][0] > words[i + 1][0])
    {
      char *temp = words[i];
      words[i] = words[i + 1];
      words[i + 1] = temp;
    }
    i++;
  }
  printf("%s\n", words[0]);
  printf("%s\n", words[1]);
  printf("%s\n", words[2]);
  printf("%s\n", words[3]);
}

int main(int argc, char const *argv[])
{
  char *p = "Hello world im here";

  vc_sort_words(vc_split_whitespaces(p));

  return 0;
}