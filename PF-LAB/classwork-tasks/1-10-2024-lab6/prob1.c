/*
? Which loop system would be better for user input. Justify your answer by creating a program that 
takes a value and adds it to a variable and prints it repeatedly until the user enters a zero value.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

#include <stdio.h>

int main (){
    // while loop is best for this case as it stops on a condtion

    int num=1;
    int total=0;

    while (num!=0){
        printf("enter num: ");
        scanf("%d",&num);
        total += num;
    }

    printf("total: %d",total);


    return 0;
}