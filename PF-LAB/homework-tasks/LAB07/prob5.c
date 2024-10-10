/*
5. A weather station records temperature in an array over the course of a week (7 days). Write a program
that calculates the average temperature of the week and identifies if any days had extreme temperatures
(above 40°C or below 0°C).
Example Input: [25, 30, -2, 35, 42, 28, 10]
Example Output: Average temperature: 24.0°C, Extreme temperatures on day 3 and day 5.
*/


#include <stdio.h>

 int main() {
    int arr[7]= {25,30,-2,35,42,28,10};
    int min= 9999, max = 0; 
    float avg = 0.0;
    int i;
    for (i = 0;i<7;i++){
        if (arr[i]>arr[max]){
            max = i;
            printf("max: %d\n",arr[i]);
        }
        if (arr[i]<arr[min]){
            min = i;
        }
        
    }
   
    for (i = 0;i<7;i++){
        avg += arr[i];
        
    }
    avg /= 7;
    printf("Average temperature: %.1f \nExtreme tempertaures on day %d and on day %d",avg,min+1,max+1);
    
    return 0;
}