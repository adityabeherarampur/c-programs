#include <stdio.h>

// This will print a 2-dimentional array of integers

int main () {
	int arr[3][4];
	int i, j;
	printf("Enter integer elements into an array\n");
	
	for (i=0; i<3; ++i) {
		for (j=0; j<4; ++j) {
			scanf ("%d", &arr[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\nThe matrix entered by user is\n");
	for (i=0; i<3; i++) {
		for (j=0; j<4; j++) {
			printf ("%d \t", arr[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}

