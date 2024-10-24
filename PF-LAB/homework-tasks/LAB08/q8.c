/*
? Write a C program to generate a diamond shape pattern using nested loops. The program should take the number of rows for the upper half of the diamond as input from the user.

n = 4

    *
   ***
  *****
   ***
    *

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/


#include <stdio.h>


int main(){

    int n;

    printf("Enter width of diamond: ");
    scanf("%d",&n);


    int i,k;

    // 1ST HALF
    
    for ( k = 0; k < n; k++)
    {
        // dec spaces

        for (i = n-k; i > 0; i--)
        {
            printf(" ");
        }

        // inc stars

        for (i = 0; i < k; i++)
        {
            printf("* ");
        }   
        printf("\n");
    }

    

    // 2ND HALF

    for ( k = 0; k < n; k++)
    {
        // inc spaces

        for (i = 0; i < k; i++)
        {
            printf(" ");
        }

        // dec stars
        
        for (i = n-k; i > 0; i--)
        {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}