/*
? | Write a program to check whether a number is an Armstrong number or not.
? | An Armstrong number is a number that is equal to the sum of cubes of its digits.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

// header
#include <stdio.h>

// start main function
int main(){

    // declaration
    int num, sum = 0, digit, temp;

    // taking inputs
    printf("enter num: ");
    scanf("%d", &num);

    // processing
    // 153 = 1^3 + 5^3 + 3^3 = armstrong

    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    // output
    (num == sum) ? printf("armstrong number") : printf("NOT armstrong number");

    return 0;
}