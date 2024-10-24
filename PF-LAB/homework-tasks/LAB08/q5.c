/*
? Write the saddle point(s) in a given 3x3 matrix. A saddle point is an element that is the smallest in its row and the largest in its column.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>


int main (){
    int i,j;
    int small = 999;
    int col_index;
    short is_saddle = 1;
    int arr[3][3] ={{ 15, 12, 14 },
        			{ 25, 10, 15 },
        			{ 40,  2, 10 }};

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]<small){
                small = arr[i][j];
                col_index = j;
            }
        }
        // check this small val
        // here j is to check col
        for(j=0;j<3;j++){
        	// if below statement is true, then not saddle val
            if (small< arr[j][col_index]){
                is_saddle = 0;
                break;
            }
        }
        
        if (is_saddle){
        	printf("\nsaddle: %d\ni-> %d\nj-> %d \narr[i][j]: %d ",small,i,j,arr[i][j]);
		}
		// discard value to re- search the array
		small = 999;
    }




    return 0;
}