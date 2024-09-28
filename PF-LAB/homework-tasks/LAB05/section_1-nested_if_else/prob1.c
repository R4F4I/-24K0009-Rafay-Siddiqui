/*
? Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult, and Senior, using nested if-else statements.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

#include <stdio.h>

int main()
{

    int age;

    printf("enter your age:");
    scanf("%d", &age);

    if (age < 20)
    {
        if (age < 13)
        {
            printf("\nchild");
        }
        else
        {
            printf("\nteenager");
        }
    }
    else if (age < 60)
    {
        printf("\nAdult");
    }
    else
    {
        printf("\nSenior");
    }

    return 0;
}