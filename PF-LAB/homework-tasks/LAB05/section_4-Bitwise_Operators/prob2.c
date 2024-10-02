/*
? Create a program that counts the number of 1s in the binary representation of a number

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>
#include <math.h>

//start main function
int main (){
    
    // declaration
    int num;
    int save;
    float temp;
    int i;
    int j;
    int count;

    // taking inputs
    printf("enter num: ");
    scanf("%d",&num);


    // processing
    // binary representation of a decimal can be deduced from the 2^n that take to make it up, as they are ones in binary
    // 350 = 256 + 64 + 16 + 8 + 4 + 2 => 6 
    // to get to the closest yet smallest power of 2, use a loop
    

    while (temp < num){
        temp = pow(2,i);
        i+=1;
    }
    printf("\ni: %d",i);

    // offset
    i-=2;
    temp = pow(2,i);
    save = i;

    while (num!=0)
    {
        j = save;
        num = num - temp;

        while (temp > num && j != 0)
        {
            temp = pow(2,j);
            j-=1;
        }
        save = j;
        count +=1;
    }
    // output
    printf("\nnumber of ones: %d",count);

    return 0;

}