#include <stdio.h>

int main (){
	// initialisation
	int customer_id;
	char name[30];
	int unit;
	float charge_unit, bill,new_bill, sur_charge;
	
	
	// inputs
	printf("enter customer id: ");
	scanf("%d",&customer_id);
	
	printf("\nenter name: ");
	scanf("%s",&name);
	
	printf("\nenter unit: ");
	scanf("%d",&unit);
	
	// processing
	if (unit<200){
		charge_unit = 16.2;
	} else if (unit>199 && unit<300){
		charge_unit = 20.1;
	} else if (unit>299 && unit<500){
		charge_unit = 27.1;
	} else if (unit>=500){
		charge_unit = 35.9;
	}
	
	bill = (charge_unit)*unit;
	
	
	// ------output -------
	
	printf("customer ID: %d\n",customer_id);
	printf("customer Name: %s\n",name);
	printf("units consumed: %d\n",unit);
	printf("Amount charges @%.1f per unit: %.1f\n",charge_unit,bill);
	if (bill >18000){
		sur_charge = 0.15*bill;
		new_bill=bill+sur_charge;
		printf("surcharge amount:%.1f\n",sur_charge);
		printf("net amount paid by customer: %.1f\n", new_bill);
	}
	
	
}
