/*
? | Write a c program to find the second smallest element in an array.
? | Input 5 elements in the array (value must be <9999):
? | element - 0: 0
? | element - 1: 9
? | element - 2: 4
? | element - 3: 6
? | element - 4: 5
? | Expected Output:
? | The Second smallest element in the array is: 4

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    int i, arr[]={0,9,4,6,5,2,3,8,10,21,12,7};
    int j=1000,k=1000;
    int n = sizeof(arr)/sizeof(arr[0]);

    // processing
    // logic 
    // use loop to fill one var with smallest,
    // use another loop to fill 2nd var with smallest val, but greater than smallest val var

    for (i = 0; i < n; i++){
        if (arr[i]<j){
            j = arr[i];
        }
    }
    for ( i = 0; i < n; i++){
        if (arr[i]<k && arr[i]>j){
            k = arr[i];
        }
    }
    // output    
    printf("The Second smallest element in the array is: %d" ,k);

    return 0;

} // end main