#include <stdio.h>


int main (){

    int num[100];
    int i=0;

    printf("Enter : ");
    int res = scanf("%[A-Za-z]",num);

    printf((res == 1)? "correct input: %s": "invalid input",num);

    return 0;
}