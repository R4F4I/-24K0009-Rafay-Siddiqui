#include <stdio.h>

int main (){
	
	int i,j,k=0;
	
	for (i=0;i<10;i++){

		for (j=0;j<i;j++){
			printf("%.2d ",k);
			k++;
		
		}
				
		printf("\n");
		
	}
	
	
	
	return 0;

}
