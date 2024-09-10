
#include <stdio.h>

int main (){
	float a;
	printf("Enter grade: ");
	scanf("%f",&a);
	if (a>100 || a<0){
		printf("Incorrect grade");
	}
	else if (a>95){
		printf("A+");
	}
	else if (a>90){
		printf("A");
	}
	else if (a>80){
		printf("B");
	}
	else if (a>70){
		printf("C");
	}
	else if (a>60){
		printf("D");
	}
	else if (a>50){
		printf("E");
	}
	else if (a<=50){
		printf("F");
	}
	else{
		printf("unknown input");
	}
	printf("\nEntered grade: %f ",a);
	return 0;
}
