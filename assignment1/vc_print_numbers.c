/* ************************************ */
/*                                      */
/* vc_putnbr.c                          */
/*                                      */
/* By: Juan, Kenta                      */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_print_numbers() 
{
	char ch;

	for (ch = 48; ch <= 57; ch++) {
		putchar(ch);
	}

	return 0;
}
