/*

? |Create a program with a constant that defines the maximum allowable temperature (in
? |Celsius). Write a function to compare input temperatures and use a static variable to
? |count how many times temperatures exceeded the limit.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

const int MAX_TEMP = 40; // Maximum allowable temperature in Celsius

int max_temp_counter(int temp){
    if (temp>MAX_TEMP)
    {
        return 1;
    }
    return 0;
}

int main(){

    int temp_arr[]= {30, 35, 45, 38, 42, 48, 32};
    int total = 0;
    for (size_t i = 0; i < 7; i++)
    {
        total += max_temp_counter(temp_arr[i]);
    }
    
    printf("%d times exceeded limit",total);



 return 0;
}