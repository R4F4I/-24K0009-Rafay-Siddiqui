// take an inputfrom user for the amt of values to take, then use loop to take all input then out put all the values entered

#include <stdio.h>

int main(){
	
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
	//while(i!=len){}
	while (i!=0){
		printf("%d ",arr[len-i]);
		i--;
	}
	
	return 0;
}