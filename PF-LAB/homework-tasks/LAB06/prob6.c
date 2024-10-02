/*
? | Using the above program integrate, the number if it is a prime and print the Fibonacci series till that number.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>
#include <stdbool.h>

//start main function
int main (){
    
    // declaration
    int num, i;
    int f_n2=0, f_n1=1, f_n0=0;
    bool flag = false;

    // taking inputs
    printf("enter num: ");
    scanf("%d",&num);
    i = num-1;

    // processing for prime, flag is true when not prime
    while (i!=1){if (num % i ==0){flag = true;break;} i -= 1;}

    // processing for fibonacci series
    if (!flag)
    {
        printf("number is prime...\n");
        // run a fibonacci series till this num

        printf("series is: ");
        while (f_n0 < num)
        {
            printf("%d  ", f_n0);
            // addition of prev two numbers
            f_n2 = f_n1 + f_n0;

            // assignment of new member as f_n1 and prev to f_n0
            f_n0 = f_n1;
            f_n1 = f_n2;
        }
    }

    return 0;


}