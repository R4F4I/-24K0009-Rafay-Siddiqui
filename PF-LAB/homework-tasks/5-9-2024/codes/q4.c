//start

// adding lib
#include <stdio.h>

// start main code
int main(){
    
    float fuel_consumed,total_fuel_consumed,fuel_average,frwd_fuel_cost,bckwd_fuel_cost,total_fuel_cost;
    const float dist = 1207.0;
    const float frwd_fuel_price = 118.0;
    const float bckwd_fuel_price = 123.0;
    
    printf("enter fuel average (must be greater than 0):\n");
      scanf("%f",&fuel_average);

    while (fuel_average<0){
      printf("enter valid value for fuel average:\n");
      scanf("%f",&fuel_average);
    }
    
    // fuel consumed is same as distance is same
    fuel_consumed = dist*fuel_average;
    
    // hence total fuel is twice as one back and forth trip
    total_fuel_consumed = 2*fuel_consumed;
    
    // fuel cost will be different due to different rates
    frwd_fuel_cost = fuel_consumed*frwd_fuel_price;
    bckwd_fuel_cost = fuel_consumed*bckwd_fuel_price;
    
    // total fuel cost
    total_fuel_cost = frwd_fuel_cost + bckwd_fuel_cost;
    
    printf("total fuel cost %f \n",total_fuel_cost);
    printf("total fuel consumed %f \n",total_fuel_consumed);
}
//end
