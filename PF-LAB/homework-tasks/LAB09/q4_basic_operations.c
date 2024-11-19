/*

? |Write a C program with a user-defined function calculate to perform basic arithmetic operations
? |such as addition, subtraction, multiplication, and division. The program should take two
? |numbers and an operation choice as input, and then use the function to perform the operation.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}


int main(){

    int m,n;

    printf("Enter num1: ");
    scanf("%d",&m);
    
    printf("Enter num2: ");
    scanf("%d",&n);

    printf("add: %d\n",add(m,n));
    printf("sub: %d\n",sub(m,n));
    printf("mul: %d\n",mul(m,n));
    printf("div: %d\n",div(m,n));

}