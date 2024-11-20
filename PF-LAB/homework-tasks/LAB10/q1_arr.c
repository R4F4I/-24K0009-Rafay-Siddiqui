/*

? | Write a recursive function that takes an array and its size as input and prints all the
? | elements.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

void recur_print(int arr[], int n) {
    if (n < 0) {
        // base case: to stop the function
        return;
    }
    printf("%d ", arr[n]);
    recur_print(arr,n-1);
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    recur_print(arr, 4);


 return 0;
}