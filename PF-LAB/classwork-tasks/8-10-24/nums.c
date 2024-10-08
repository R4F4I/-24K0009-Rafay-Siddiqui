#include <stdio.h>

// simple wrapper for dialog and taking user input
int input_num(char string[]){

	int value;

	printf("\n%s",string);
	scanf("%d",&value);
	
	return value;
}


int main() {
    int nums[5] = {10,12,14,18,16};
    int num = sizeof(nums)/sizeof(nums[0]); 	//sizeof gives storage size of input var, for:
	int i;										// array, 1 int = 4 bytes, 5 ints in an array = 20 bytes
	for(i = 0; i<num; i++){
		printf(" %d",nums[i]);
	}
	
    int d = input_num("enter num: ");
    
    printf("%d",d);
    

    return 0;
}
