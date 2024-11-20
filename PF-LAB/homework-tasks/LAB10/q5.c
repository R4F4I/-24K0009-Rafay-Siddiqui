/*

? |Write a recursive function bubbleSort that takes an array and its size. It performs the
? |bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
? |they are in the wrong order.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

void recur_bubble_sort(int arr[], int n){
    int temp;
    // if only one element is left to check
    if (n==0)
    {
        return;
    }
    // nested for loops are used in bubble sort 
    // the inner for loop is here
    for (size_t i = 0; i < n; i++)
    {
    
        if (arr[i]>arr[i+1])
        {
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
    
    recur_bubble_sort(arr, n-1);
    
}

int main(){

    int arr[]= {64,34,25,12,22,11,90}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    recur_bubble_sort(arr,n-1); // to account 0-indexing

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

 return 0;
}