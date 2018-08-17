/* ************************************ */
/*                                      */
/* vc_putnbr.c                          */
/*                                      */
/* By: Juan, Kenta                      */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_is_negative(int n) {
	char v;

	if (n < 0) {
		v = 78;
		putchar(v);
	} else if (n >= 0) {
		v = 80;
		putchar(v);
	} else {
		v = 80;
		putchar(v);
	}
}