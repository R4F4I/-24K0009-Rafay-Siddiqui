/*
Create a calculator asking for operator (+ or – or * or /) and operands and
performs calculation according to the user input using switch statement.
*/

// allow print
# include <stdio.h>

// main function
int main (){
	
	// declaration
	double num1;
	char operator;
	double num2;
	double result;
	

	// input
	printf("number 1: ");
	scanf("%lf",&num1);

	printf("operator: ");
	scanf(" %c",&operator);
 
	printf("number 2: ");
	scanf("%lf",&num2);
		
	// validation


	switch (operator){

		case '+':
	
		result = num1 + num2;
		break;


		case '-':

		result = num1 - num2;
		break;

	
		case '/':
		
		result = num1 / num2;
		break;

		case '*':
	
		result = num1 * num2;
		break;
	
		default:
		printf("Error");

	}
		
	printf("Output: %.2lf", result);
	
	return 0 ;
}