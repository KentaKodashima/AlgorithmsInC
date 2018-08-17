/* ************************************ */
/*                                      */
/* vc_sort_int_table.c                  */
/*                                      */
/* By: Juan, Kenta, Natsumi             */
/*                                      */
/* ************************************ */

#include <stdio.h>
void vc_sort_int_table(int *tab, int size) 
{
  int temp;

  for (int i = 0; i < size; i++) 
  {
    for (int j = i+1; j < size; j++) 
    {
      if (tab[i] > tab[j]) 
      {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
      }
    }
  }

}