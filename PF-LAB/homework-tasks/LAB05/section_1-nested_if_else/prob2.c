/*
? | Create a program that determines if a number is positive, negative, or zero, and if it's positive,
? | checks if it's an even or odd number.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/


#include <stdio.h>

int main()
{

    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("\n positive even number");
        }
        else
        {
            printf("\n positive odd number");
        }
    }
    else if (num < 0)
    {
        printf("\nnegative");
    }
    else
    {
        printf("\nzero");
    }

    return 0;
}