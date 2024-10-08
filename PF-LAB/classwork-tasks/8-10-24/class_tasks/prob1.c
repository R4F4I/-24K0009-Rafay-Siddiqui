//Write a C Program that takes an user input array and prints the sum of its elements.
//Input: {1,2,3,4,5,6,7,8,9}
//Output: 45

#include <stdio.h>


int main (){
	
	int len=0;
	
	printf(" enter the size of array for input: ");
	scanf("%d",&len);

	int arr[len];
	int total=0,i=0;
	for (i=0;i<len;){
		
		printf("Enter value for index %d: ",i);
		scanf("%d",&arr[i]);
		
		
		i++;
	}
	while (i!=0){
		printf("%d ",arr[len-i]);
		i--;
	}
	
	while(i<len){
		total+=arr[i];
		i++;
	}

	printf("output: %d",total);

return 0;


}