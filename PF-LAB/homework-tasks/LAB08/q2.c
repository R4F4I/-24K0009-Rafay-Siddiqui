/*
? Write a C program that generates a sequence of prime numbers within a given range using
nested loops.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

// in an outer loop, divide the current value with all values smaller than it, if it is not divisible with any one of them it is a prime

#include <stdio.h>

int main(){

    int m,n,i,j,is_prime=0;

    printf("Enter an inner range: ");
    scanf("%d",&m);
    printf("Enter an outer range: ");
    scanf("%d",&n);

    for (i = m; i < n+1; i++)
    {
        is_prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                is_prime = 0;
                //printf("not prime %d ",i);
            }

        }
        if (is_prime == 1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
