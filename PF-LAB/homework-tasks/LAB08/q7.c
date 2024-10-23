/*
? Write a C program to multiply two matrices of size 3x3 and display the result matrix.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/


#include <stdio.h>

/*

12 43 37 
88 74 89 
17 75 73 

 9 19 97 
98 92 13 
51 90 77 

44 36 89 
70 94 69 
32 80 18 

*/

int main(){
    int i,j,k,l;
    int arr[3][3] = {
        {12 ,43 ,37 },
        {88 ,74 ,89 },
        {17 ,75 ,73 },
    };
    int arr_2[3][3] = {
            {9 ,19 ,97 },
            {98 ,92 ,13 },
            {51 ,90 ,77 },
    };

    int mat_mult[3][3] = {0};
    int dot_prod = 0;

    // mat mult is dot product of row and cols    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            for (k = 0; k < 3; k++){
                mat_mult[i][j] += (arr[i][k]*arr_2[k][j]);		            
            }                        
        }    
    }
            
    

    for (k = 0; k < 3; k++){
        for (l = 0; l < 3; l++){
            printf("%d ",mat_mult[k][l]);
        }
        printf("\n");
    }


    return 0;
}