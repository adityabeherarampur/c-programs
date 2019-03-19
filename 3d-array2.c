#include <stdio.h>
int main()
{
    // This array can store 12 elements entered by user

    int i, j, k, test[2][3][2];

    printf("Enter 12 values: \n");

    for(i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            for(k = 0; k < 2; ++k ) {
                scanf("%d", &test[i][j][k]);
            }
        }
    }

    // Displaying values with proper index.

    printf("\nDisplaying values:\n");

    for(i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            for(k = 0; k < 2; ++k ) {
                printf("test[%d][%d][%d] = %d\t", i, j, k, test[i][j][k]);
            }
			printf ("\n");
        }
		printf ("\n\n");
    }

    return 0;
}

