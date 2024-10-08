/*
Write a program in C to read n number of values in an array and display it in reverse order
Input: {1,2,3,4,5,6,7,8,9}
Output: 9 8 7 6 5 4 3 2 1
*/

#include <stdio.h>

int main (){
	
	int len=0;
	
	printf(" enter the size of array for input: ");
	scanf("%d",&len);

	int arr[len];
	int i=0;
	for (i=0;i<len;){
		
		printf("Enter value for index %d: ",i);
		scanf("%d",&arr[i]);
		
		
		i++;
	}
	i--;
	while (i!=-1){
		printf("%d ",arr[i]);
		i--;
	}
	
	
return 0;


}