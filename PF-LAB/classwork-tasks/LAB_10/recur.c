#include <stdio.h>

#include <stdlib.h>


int fact (int n){
    return (n<1) ? 1  : n * fact((n)-1);
}

int sum_of_digits(int n){
    return (n==0)? 0: n % 10 + sum_of_digits(n/10);
}

void main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    printf("\nsum of digidts of %d: %d ",n,sum_of_digits(n));
    printf("\nfact of %d: %d ",n,fact(n));
}

/*
recursion:
- base case,
- direct / indirect,
- tail / non-tail,

indirect:
when func a calls func b which calls func a

*/
