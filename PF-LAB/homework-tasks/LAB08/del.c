#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS];
    int ok=1;
    
    // Seed the random number generator
    srand(time(NULL));

    // Generate random numbers and fill the array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 100; // Random numbers between 0 and 99
        }
    }

    // Print the array
    printf("Random 4 x 3 array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    
    while (ok !=0){
    	printf("ok? ");
    	scanf("%d",&ok);
	}
    if(ok==0){
    	return 0;	
	}

    
}
