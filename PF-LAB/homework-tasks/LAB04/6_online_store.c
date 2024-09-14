/*
An online shopping store is providing discounts on the items due to the Eid. 
If the cost of items is less than 2000 it will give a discount up to 5%. I
f the cost of shopping is 2000 to 4000, a 10% discount will be applied. 
If the cost of shopping is 4000 to 6000, a 20% discount will be applied. 
If it's more than 6000 then a 35% discount will be applied to the cost of shopping. 
Print the actual amount, saved amount and the amount after discount. 
The Minimum amount eligible for a discount is 500.
*/

#include <stdio.h>

int main(){
    float items_cost;
    float saved_cost;
    float final_cost;
    int discount;

    //input
    printf("Enter the cost of items: ");
    scanf("%f",&items_cost);

    //criteria for discount
    if (items_cost<500) //less than 500
    {
        discount = 0;
    } 
    else if (items_cost>500 && items_cost<2000) // b/w 500 & 2000
    {
        discount = 5;
    } 
    else if (items_cost>2000 && items_cost<4000) // b/w 2000 & 4000
    {
        discount = 10;
    }
    else if (items_cost>4000 && items_cost<6000) // b/w 4000 & 6000
    {
        discount = 20;
    }
    else if (items_cost>6000) // more than 6000
    {
        discount = 35;
    }
    
    saved_cost = items_cost*discount/100;
    final_cost = items_cost - saved_cost;

    printf("\ndiscount: %d",discount);
    printf("\nsaved cost: %.2f",saved_cost);
    printf("\nfinal cost: %.2f",final_cost);
    

    return 0;
}