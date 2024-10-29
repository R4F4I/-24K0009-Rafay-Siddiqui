#include <stdio.h>

int arr_prod(int arr[],int size){

    int i,prod=1;

    for (i = 0; i < size; i++)
    {
        prod *= arr[i];
    }
    return prod;

}

int arr_sum(int arr[],int size){

    
    int i,sum=0;

    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;

}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j,k;
    j = arr_prod(arr,n);
    k = arr_sum(arr,n);

    printf("arr_prod: %d ",j);
    printf("arr_sum: %d ",k);

    return 0;
}