/*
? Implement a C program to find the transpose of a given m x n matrix. Print the transposed matrix.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/


// transpose a[i][j] -> a[j][i]

#include <stdio.h>

//#define row 4
//#define col 4


void transpose(int arr[4][4],int row,int col){
int i,j;
int arr_t[row][col];

for(i=0;i<row;i++){
for(j=0;j<col;j++){
arr_t[j][i] = arr[i][j];
}
}

for(i=0;i<row;i++){
for(j=0;j<col;j++){
printf("%d ",arr_t[i][j]);
}
printf("\n");
}
}

int main (){
int row = 4;
int col = 4;

int arr[4][4]={{ 1, 2, 3, 4},
               { 5, 6, 7, 8},
               { 9,10,11,12},
               {13,14,15,16}};

int arr_2[4][4] = {0};

int i;

transpose(arr,row,col);


return 0;
}