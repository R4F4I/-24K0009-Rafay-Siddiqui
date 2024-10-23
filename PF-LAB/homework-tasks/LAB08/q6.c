/*
? Write a C program that finds the maximum element in a given m x n matrix and its position (row,
column).

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/


#include <stdio.h>

int main(){
    int i,j,max = -1;
    int arr[4][3] = {{26 ,30 ,50}, 
                    {7 , 24 ,39}, 
                    {41 ,78 ,79}, 
                    {75 ,100 ,37}};
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (max<arr[i][j]){
                max = arr[i][j];
            }

        }
    }
    printf("%d",max);

    return 0;
}