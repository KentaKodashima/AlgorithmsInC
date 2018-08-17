/* ************************************ */
/*                                      */
/* 04 vc_split_whitespaces.c            */ 
/* 05 vc_print_words.c                  */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

int length(char *src)
{
  int counter = 0;
  while(*src)
  {
    counter++;
    src++;
  }
  return counter;
}

int length2(char **src)
{
  int counter = 0;
  while(*(src+counter))
  {
    counter++;
    // src++;
  }
  return ++counter;
}

int separatorNums(char *str) 
{
  int counter = 0;
  while(*str)
  {
    if ((str[counter] == 32) || (str[counter] == '\t') || (str[counter] == '\n'))
    {
      counter++;
    }
    str++;
  }
  return counter;
}

// Exercise 05 vc_print_words
void vc_print_words(char **words)
{
  int counter = 0;
  int colSize;
  int rowSize;
  int i;
  int j;
  rowSize = length2(words);
  printf("%d\n", rowSize);
  
  for (i = 0; i < rowSize-1; i++)
  {
    colSize = length(words[i]);
    for (j = 0; j < colSize; j++)
    {
      putchar(words[i][j]);
    }
    putchar('\n');
  }
}

// Exercise 04 vc_split_whitespaces
char **vc_split_whitespaces(char *str)
{
  char **arrP;
  int counter = 0;
  int size = length(str);
  int rowSize = separatorNums(str)+1;
  int i;
  int j;
  // Setting the array[][] size
  *arrP = malloc(sizeof rowSize);
  for (i = 0; i < size; i++)
  {
    arrP[i] = malloc(sizeof(int*) * size);
  }
  
  for (i = 0; i < rowSize; i++)
  {
    for (j = 0; j < size; j++)
    {
      if ((str[counter] == 32) || (str[counter] == '\t') || (str[counter] == '\n'))
      {
        counter++;
        arrP[i][j] = '\0';
        break;
      }
      if (counter == size)
      {
        arrP[i][j] = '\0';
      }
      else
      {
        arrP[i][j] = str[counter];
        counter++;
      }
    }
    printf("arrP[%d] = \"%s\"\n", i, arrP[i]);
  }
  arrP[rowSize] = NULL;

  return arrP;
}

int main(int argc, char const *argv[])
{
  
  char p[] = "Hello world im yet afsdfaw fasdfa";
  char **q = vc_split_whitespaces(p);

  // vc_print_words(q);
  
  return 0;
}
