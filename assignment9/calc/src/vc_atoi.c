/* ************************************ */
/*                                      */
/* vc_atoi.c                            */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_atoi(char *str)
{
	int rint = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		rint = str[i] - '0';
	}
	return rint;
}