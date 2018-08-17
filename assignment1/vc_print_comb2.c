/* ************************************ */
/*                                      */
/* vc_print_comb2.c                     */
/*                                      */
/* By: Juan, Kenta                      */
/*                                      */
/* ************************************ */

#include <stdio.h>

int nums[10] = {48,49,50,51,52,53,54,55,56,57};

void helper() {
	for (int k = 0; k < 10; k++) {
		for (int l = 0; l < 10; l++) {
			putchar(nums[k]);
			putchar(nums[l]);
			putchar(44);
		}
	}
}

void vc_print_comb2() {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			putchar(nums[i]);
			putchar(nums[j]);
			putchar(32);
			helper();
		}
	}

	// for (int i = 0; i < 10; i++) {
	// 	for (int j = 0; j < 10; j++) {
	// 		for (int k = 0; k < 10; k++) {
	// 			for (int l = j+1; l < 10; l++) {
	// 				if ((i != k && j != l) || (i != k || j != l)) {
	// 					putchar(nums[i]);
	// 					putchar(nums[j]);
	// 					putchar(32);
	// 					putchar(nums[k]);
	// 					putchar(nums[l]);
	// 					putchar(44);
	// 				}
	// 			}
	// 		}
	// 	}
	// }
	
	// for (int i = 48; i <= 57; i++) {
	// 	for (int j = 48; j <= 57; j++) {
	// 		for (int k = 48; k <= 57; k++) {
				// for (int l = 48; l <= 57; l++) {
				// 	if ((i != k && j != l) || (i != k || j != l)) {
				// 		putchar(i);
				// 		putchar(j);
				// 		putchar(k);
				// 		putchar(l);
				// 	}
				// }
	// 		}
	// 	}
	// }
}

int main() 
{
	vc_print_comb2();

	return 0;
}