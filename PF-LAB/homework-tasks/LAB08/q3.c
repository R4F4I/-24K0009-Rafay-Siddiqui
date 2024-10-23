/*
Generate a pattern of odd numbers in decreasing order starting from a user-specified number
using nested loops.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

int main (){

int n=0;
int i;

while (n%2==0){
printf("Enter an odd num: ");
scanf("%d",&n);
}

for(i=n/2+1;i>0;i--){
printf("%d ",(2*i)-1);
}


return 0;
}