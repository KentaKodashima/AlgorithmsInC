/* ************************************ */
/*                                      */
/* vc_print_reverse_alphabet.c          */
/*                                      */
/* By: Juan, Kenta                      */
/*                                      */
/* ************************************ */
#include <stdio.h>

 void vc_print_reverse_alphabet()
{
	char ch;

	for (ch = 'Z'; ch >= 'A'; ch--) {
		putchar(ch);
	}

	return 0;
}

