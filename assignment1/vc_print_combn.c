/* ************************************ */
/*                                      */
/* vc_print_combn.c                     */
/*                                      */
/* By: Juan, Kenta                      */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_print_combn(int n) {
	int inputNums[n];
	int nums[10] = {48,49,50,51,52,53,54,55,56,57};

	for (int i = n; i <= 9; i++)
  {
		// append current digit to number
		

		// recurse for next digit
		vc_print_combn(i);
  }
}

// void vc_print_combn(int n) {
// 	int inputNums[n];
// 	int nums[10] = {48,49,50,51,52,53,54,55,56,57};

// 	for (int i = 0; i < n; i++) {
// 		for (int s = 0; s < 10; s++) {
// 			inputNums[i] = nums[s];
// 			putchar(inputNums[i]);
// 		}
// 		putchar(44);
// 	}
// }

int main() 
{
	vc_print_combn(6);

	return 0;
}