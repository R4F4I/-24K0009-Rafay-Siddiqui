//start

// adding lib
#include <stdio.h>

// start main code
int main(){
    
    // declaration
    int final, taxrate, salary;

    // taking input

    // salary
    printf("enter taxrate in percentage (for example: 50 percent):\n");
    scanf("%d",&taxrate);
    while (taxrate>100){
        printf("value cannot be greater than 100!\ntry again:");
        scanf("%d",&taxrate);
    }
    taxrate = 100 - taxrate;
    // taxrate
    printf("enter salary:\n");
    scanf("%d",&salary);
    
    // now the user will enter the salary he receives after tax deduction

    final = taxrate*salary/100;
    printf("your initial salary: %d \n",salary); 
    printf("your final salary : %d \n",final);
    return 0;
}
//end

/*
notes:
- when outputting value of variable dont use '&'
- '&' is for address where value is to be store
 */
