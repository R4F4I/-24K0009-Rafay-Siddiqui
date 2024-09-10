// 1:balance 
// 2:withdraw
// 3:deposit
// 4:exit

#include <stdio.h>

int main (){

	int dummy_balance = 1000000, width_amt=0, dep_amt=0, choice=0;
	
	printf("1:balance\n2:withdraw\n3:deposit\n4:exit\n");
	
	printf("Enter choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1: 
			printf("Your balance is: %d",dummy_balance);
			break;
		case 2: 
			
			printf("Enter withdraw amount:");
			scanf("%d",&width_amt);
			
			dummy_balance = dummy_balance - width_amt;
			printf("Your balance is: %d",dummy_balance);
			break;
		case 3: 
			printf("Enter deposit amount:");
			scanf("%d",&dep_amt);
			
			dummy_balance = dummy_balance + dep_amt;
			printf("Your balance is: %d",dummy_balance);
			break;
		case 4: 
			printf("Thank you for visitng!");
			break;
		default:
			printf("Incorrect input");
			break;
	}

}