/* ************************************ */
/*                                      */
/* vc_print_alphabet.c                  */
/*                                      */
/* By: Juan, Kenta , Natsumi            */
/*                                      */
/* ************************************ */
#include <stdio.h>

 void vc_print_alphabet() 
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++) {
		putchar(ch);
	}

	return 0;
}

