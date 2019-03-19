#include <stdio.h>

// Declaring a 3-dimentional array and initializing

int main () {
	int array[2][3][4];
	
    array[2][3][4] ={ 3, 4, 2, 3,  0, -3, 9, 11,  23, 12, 23, 2,
		13, 4, 56, 3,  5, 9, 3, 5,  3, 1, 4, 9 };
	
	printf ("%d", array[0][1][3]);

	
	return 0;
}

