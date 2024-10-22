/*
? Write a C program that takes a square matrix as input and prints its diagonal elements.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

#include <stdio.h>


int main(){
    int size,i,j;

    int arr [50][50]= {0};

    printf("Enter size of your sqaure matrix: ");
    scanf("%d",&size);


    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("for \n row: %d \n col: %d\n Enter value :",i,j);
            scanf("%d",&arr[i][j]);
        }

    }

    for (i = 0; i < size; i++)
    {
        printf("%d ",arr[i][i]);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    


    return 0;
}