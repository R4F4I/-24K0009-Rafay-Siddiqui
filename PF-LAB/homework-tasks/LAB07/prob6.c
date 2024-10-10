/*
? Given an array arr[] of size N which contains elements from 0 to N-1, you need to find all the
elements occurring more than once in the given array.
Input:
Array Size =5

Element 1=2
Element 2=3
Element 3=1
Element 4=2
Element 5=3

Output:
Number 2 and 3 in array occur more than once.

Note: You cannot utilize nested loops.


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

#include <stdio.h>

int main(){

    int arr[11]  = {2,3,4,1,2,3,1,9,7,8,9};
    int freq[11] = {0,0,0,0,0,0,0,0,0,0,0}; // length of this arr will be = to largest element in arr    
    int i;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        freq[arr[i]]++; //  arr[2] = 3 hence freq[3] = 1
    }

    
    printf("Numbers: ");
    for (i = 0; i < n; i++)
    {
        if (freq[i]>1)
        {
            printf("%d ",i);
        }
    }
    printf(" occur more than once");

    return 0;
}
