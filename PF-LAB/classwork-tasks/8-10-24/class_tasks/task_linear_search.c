// linearsearch in array
#include <stdio.h>


int main(){

    int num[10]= {1,2,3,4,5,6,7,8,9,0};
    int len = sizeof(num)/sizeof(num[0]);

    int i=0;
    int val=0;

    printf("enter the value you want to search: ");
    scanf("%d",&val);

    while(num[i]!=val && i != len-1){
        i++;
    }

    printf(
        (num[i]==val)
        ? "value found at index %d"
        : "value not found",i
    );

    return 0;
}