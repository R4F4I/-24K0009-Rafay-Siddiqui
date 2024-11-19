/*

? |Create a function that returns the maximum and minimum element in an integer array. Use this
? |function in the main program to find the maximum and minimum from an array entered by the
? |user.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

#include <stdio.h>

int max(int arr[], int n){

    int max=-1;

    for (size_t i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
    return max;

}

int min(int arr[],int n){

    int min=999;

    for (size_t i = 0; i < n; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
        
    }
    return min;

}

int main(){

    int arr[10] = {1,3,10,5,2,6,8,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("max int: %d",max(arr,n));
    printf("min int: %d",min(arr,n));

}