/*
? | Write a program to check whether a given number is prime or not.

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
    bool flag;

    // taking inputs
    printf("enter num: ");
    scanf("%d",&num);

    i = num-1;

    // processing
    // for a number to be prime it must not be divisible with any number before it

    

    while (i!=1) // n % 1 == 0 which will mess always return not prime
    {
        if (num % i ==0)
        {
            flag = true;
            break;
        } 
        i -= 1;
    }



    // output
    (flag == true)
    ? printf("not a prime") 
    : printf("prime");

    return 0;

}