/*
? Write a program that calculates the sum of all even numbers between two given integers a and b. Use
a loop to find the sum and print the result.

Example:
- Input: a = 4, b = 10
- Output: Sum of even numbers = 28 (4 + 6 + 8 + 10)

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

#include <stdio.h>

int main (){

    int a;
    int b;
    int total =0;

    printf("start: ");
    scanf("%d",&a);
    printf("stop: ");
    scanf("%d",&b);

    while (a!=b+1){
        if (a%2==0){
            total += a;
        }
        a+=1;
    }

    printf("sum of even numbers: %d",total);
    return 0;
}