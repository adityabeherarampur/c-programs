#include <stdio.h>

// It prints 100 to 1

int main () {
	int x;
	
	for (x=0; x<100; x++) {
		printf ("%d\t", 100-x);
	}
	
	printf ("\nx is %d", x);
	
	return 0;
}

/* for (x=0; x<100; x++) 
	
at the end of each iteration x is incremented by 1  */