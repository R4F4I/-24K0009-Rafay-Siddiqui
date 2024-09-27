// ? Create a program that checks if a person is eligible to vote based on their age and citizenship status.

#include <stdio.h>
#include <stdbool.h>

int main(){
    int age;
    char citizenship_status_string[];
    

    printf("enter age");
    scanf("%d",&age);
    printf("enter citizenship_status");
    scanf("%s",&citizenship_status_string);
    if (citizenship_status_string == 'YES' && age > 18){
        printf("e;igible for vote");
    }
}