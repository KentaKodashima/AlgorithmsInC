/* ************************************ */
/*                                      */
/* vc_strrev.c                          */
/*                                      */
/* By: Natsumi, Kenta, Juan             */
/*                                      */
/* ************************************ */
#include <stdio.h>

char *vc_strrev (char *str)
{
   
   char rstr[100];
   int first;
   int last; 
   int count = 0;
  
   while (str[count] != '\0')
      count++;
 
   last = count - 1;
 
   for (first = 0; first < count; first++) {
      rstr[first] = str[last];
      last--;
   }
 
   rstr[first] = '\0';
 
   return rstr;
}