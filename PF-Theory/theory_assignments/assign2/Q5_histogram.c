/*

? | You are tasked with creating a program that generates a histogram based on user input. The user will
? | provide a set of values, and your program will use loops to create a visual representation of these values.
? | 
? | 1. Input Handling: Write a function that takes an array of integers (the values) and the count of
? | those integers as input.
? | 
? | 2. Horizontal Histogram Function: Use loops to generate and print a histogram, where each
? | value is represented by asterisks (*).
? | 
? | 3. Vertical Histogram Function: Use loops to generate and print a vertical histogram, where
? | each value is represented by asterisks (*).

Expected Values:
int values [] = {3, 5, 1, 4};
int count = 4;

Horizontal Histogram
Value 1: ***
Value 2: *****
Value 3: *
Value 4: ****
Vertical Histogram

  *
  *   *
* *   *
* *   *
* * * *
3 5 1 4



*/


#include <stdio.h>

void horz_histogram(int arr[],int len) {
    int i,j;
    for (i = 1; i < len+1; i++)
    {
        printf("value %d: ",i);
        for (j = 0; j < arr[i-1]; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
}



void vert_histogram(int arr[],int len){
    int i,j;
    int max=0;

    // first find the largest value in the array to set our loop with
    for (i = 0; i < len; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    
    // to print the stars
    /*
    we will decrement in order to start printing the largest values first
    
    when arr_val>=i print '*'

    i=5      *
    i=4      *   *
    i=3    * *   *
    i=2    * *   *
    i=1    * * * *
           3 5 1 4
    
    max = 5
    */

    for (i = max; i >0; i--){
        for (j = 0; j < len; j++){
            if (arr[j]>=i){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    
    for (i = 0; i < len; i++){
        printf("%2d ",arr[i]);
    }

}

int main(){

    int values [] = {3, 5, 1, 4};
    int count = sizeof(values)/sizeof(values[0]);

    printf("Horizontal Histogram\n\n");
    horz_histogram(values,count);
    printf("\n\n\n");
    printf("Vertical Histogram\n\n");
    vert_histogram(values,count);

}