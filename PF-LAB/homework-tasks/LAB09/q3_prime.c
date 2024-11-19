/*

Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>


int is_prime(int n) {
    if (n==0)
    {
        return -1;
    }
    
    for (size_t i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}

int main(){

    int n=-1;

    while (n!=0)
    {
        printf("Enter num (enter 0 to stop): ");
        scanf("%d",&n);

        if (is_prime(n)==1){
            printf("is prime\n");

        }
        else if (is_prime(n)==0)
        {
            printf("is not prime\n");
        }
        

    }
    
    


    return 0;
}