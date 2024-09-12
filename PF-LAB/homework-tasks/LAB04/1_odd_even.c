/*
Write a C program to check whether a number is even or odd. If the number is
even, print "This number is even"; otherwise, print "This number is odd".
*/

// import print
# include <stdio.h>

// main function
int main (){
	
	// declaration
	int num = 0;
	// input
	printf("enter a positive number: ");
	scanf("%d",&num);
		
	// validation
	while (num < 1){
		printf("enter a positive number: ");
		scanf("%d",&num);		
	}
	
	if (num % 2 == 0){

		printf("number is even");

	} else {

		printf("number is odd");

	}
	return 0;
}