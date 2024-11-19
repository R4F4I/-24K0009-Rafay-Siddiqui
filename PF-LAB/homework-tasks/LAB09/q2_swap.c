/*

? |Create a C program that swaps the values of two integers using a user-defined function,
? |swapIntegers. The user inputs two integer values, and the program uses the function to swap
? |them. It should perform the swap and display the updated values.


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

void swap(int *n, int *m){
    int temp = *m;
    *m = *n;
    *n = temp;

}

int main(){

    int n,m;

    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);

    printf("\nunswapped: %d %d",n,m);

    swap(&n,&m);

    printf("\nswapped:   %d %d",n,m);


    return 0;
}
