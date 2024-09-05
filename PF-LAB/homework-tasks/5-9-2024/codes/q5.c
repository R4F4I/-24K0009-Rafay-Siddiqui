//start

// adding lib
#include <stdio.h>

// start main code
int main(){
    
    // declaration
    int  principal, timePeriod, rate;
    float interest;
    // taking input

    // principal amount
    printf("enter principal amount:\n");
    scanf("%d",&principal);

    while (principal < 100 || principal > 1000000) {
        printf("Enter principal amount in the range of 100 to 1000000:\n");
        scanf("%d", &principal);
    }

    
    
    // time period
    printf("enter timePeriod:\n");
    scanf("%d",&timePeriod);

    while (timePeriod<5 || timePeriod>10) {
        printf("enter timePeriod in years and less than 10 :\n");
        scanf("%d",&timePeriod);
    }
    
    
    // rate
    printf("enter rate in percentage:\n");
    scanf("%d",&rate);
    while (rate<5 ||  rate>10){
        printf("enter rate in the range of 5 percent to 10 percent:\n");
        scanf("%d",&rate);
    }
    

    interest = (principal*rate*timePeriod)/100;
    printf("interest is: %.4f",interest);
    
    return 0;
}
//end
