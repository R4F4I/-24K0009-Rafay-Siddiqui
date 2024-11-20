/*

? |Write a recursive function linearSearch that takes an array, its size, the target element
? |to search for, and the current index. It checks if the target is at the current index and
? |continues searching in the subsequent indices until it either finds the target or exhausts
? |the array.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

int linear_search_recursive(int arr[], int n, int target){

    // check for target on current index n of array
    if (arr[n]==target)
    {
        return 1;
    }
    // n is out of bounds due to the upper condition never being satisfied
    if (n==0)
    {
        return 0;
    }
    // recall function an index back
    return linear_search_recursive(arr,n-1,target);
}

#include <stdio.h>

int main(){

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int target = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    (linear_search_recursive(arr, n-1, target) == 1)
        ? printf("found\n")
        : printf("not found\n");


 return 0;
}