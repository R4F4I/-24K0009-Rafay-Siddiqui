//start

// adding lib
#include <stdio.h>

// start main code
int main(){
    
    // declaration
    int num1, num2, temp;

    // taking input

    // first num
    printf("enter num1:\n");
    scanf("%d",&num1);

    // second num
    printf("enter num2:\n");
    scanf("%d",&num2);
    
    // showcase initial values
    printf("first num1 is: %d \n and num2 is: %d\n", num1, num2);
    
    // swap of values
    temp = num1;
    num1 = num2;
    num2 = temp;
    // showcasing the results
    printf("now num1 is: %d \n and num2 is: %d\n", num1, num2);
    return 0;
}
//end
