/* ************************************ */
/*                                      */
/* vc_print_comb.c                      */
/*                                      */
/* By: Juan, Kenta                      */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_print_comb() {
	int nums[10] = {48,49,50,51,52,53,54,55,56,57}; 
  for (int i = 0; i < 10; i++) {
		for (int j = i+1; j < 10; j++) {
			for (int k = j+1; k < 10; k++) {
				putchar(nums[i]);
				putchar(nums[j]);
				putchar(nums[k]);
				putchar(44);
			}
		}
	}
}

int main() 
{
	vc_print_comb();

	return 0;
}