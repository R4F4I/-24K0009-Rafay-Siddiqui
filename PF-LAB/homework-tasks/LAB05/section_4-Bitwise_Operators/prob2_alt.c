/*
? Create a program that counts the number of 1s in the binary representation of a number

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

// this is only a side note, the actual one is prob2.c

//header
#include <stdio.h>

int main() {
   int n = 350;
   int count=0;
   while (n>0){
       
       n= n&(n-1);
       count+=1;
   }
   printf("\n%d",count);
    
    return 0;
}
*/