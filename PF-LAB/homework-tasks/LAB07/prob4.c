/*
? Write a C Program to find the minimum and maximum number in an array.
Input:{4,1,6,8,10,21,8,9,2,6}
Output:
Minimum Number = 1
Maximum Number = 21

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/


#include <stdio.h>

 int main() {
    int arr[10]= {4,1,6,8,10,21,8,9,2,6};
    int min= 9999, max = 0;
    for (int i = 0;i<10;i++){
        if (arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min){
            min = arr[i];
        }
        
    }
    printf("Minimum Number = %d \nMaximum Number = %d",min,max);
    
    return 0;
}