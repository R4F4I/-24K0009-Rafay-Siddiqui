/*

? |Write a program to reverse an array using pointers without using any additional arrays.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

int main(){

    // declared arr
    int arr[] = {5,2,3,4,5,6};
    
    // got array's size
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // declared pointers
    int *ptr,i,temp;
    
    // ptr now contains arr address or arr[0] address
    ptr = arr;
    
    // ptr is dereferenced and the value at that address is printed
    printf("2: %d \n",*ptr);

    // loop to print reverse array
    for ( i = 0; i < n; i++)
    {
    printf("%d ",*(ptr+n-1-i));
    }
    
    // reverse array using pointers in the style of a bubble sort
    for ( i = 0; i < n; i++)
    {
        // temp has value of last element of array
        temp = *(ptr+n-1-i);
        
        *(ptr+n-1-i) = *(ptr+i);
        *(ptr+i) = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

 return 0;
}