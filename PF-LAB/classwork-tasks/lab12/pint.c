
#include <stdio.h>

void swap(int *ptr_a,int *ptr_b){
    int temp;
    temp   = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b =  temp;
}

int main(){
    int i,j;

    i = 10;
    j = 6;
    printf("w/o swapped i: %2d, j: %2d\n",i,j);
    printf("%d\n",*(&i));

    // pass adresses/referecnes instead of values into function
    swap(&i,&j);

    printf("w/ swapped i: %2d, j: %2d\n",i,j);


    int arr[3] = {20,30,40};
    int *ptr;

    // ptr recieves address of first value of array aka *arr[0]
    ptr = arr;

    // pointer arithmeitc
    // drefenced value of arr[0]
    printf("ptr=%d\n",*ptr);

    // print the derefenced (address+1)
    // drefenced value of arr[1]
    printf("ptr=%d\n",*(ptr+1));

    return 0;
}