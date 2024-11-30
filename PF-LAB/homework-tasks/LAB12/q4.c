/*

? |Write a program which perform following operations
? | * Dynamically allocate an array of integers of size n.
? | * Input values and calculate their sum.
? | * Reallocate the array to double its size and add n more values.
? | * Calculate the new sum.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <stdlib.h>

int main(){


    int n=10,i;
    // a pointer arr initially points a random address;
    // malloc first allocates memory of  some number of bytes and returns a void pointer to the first byte of the allocated memory block;
    // the number of bytes to store n-size int arr is n*sizeof(int)
    int *arr = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }
    
    free(arr);

 return 0;
}