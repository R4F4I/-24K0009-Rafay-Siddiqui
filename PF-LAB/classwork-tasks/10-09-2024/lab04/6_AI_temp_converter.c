//start
#include <stdio.h>

int main (){
    //declaration
    char init_temp_unit;
    char fin_temp_unit;
    float init_temp_val;
    float fin_temp_val;

    // input
    printf("Enter your temperature unit: ");
    scanf("%c",&init_temp_unit);

    while (init_temp_unit != 'C' && init_temp_unit != 'F' &&  init_temp_unit != 'K')
    {
        printf("Enter your temperature unit(C,F,K): ");
        scanf("%c",&init_temp_unit);
    }
    

    printf("Enter your temperature value: ");
    scanf("%f",&init_temp_val);

    printf("Enter temperature unit to convert to: ");
    scanf("%c",&fin_temp_unit);

    while (fin_temp_unit != 'C' && fin_temp_unit != 'F' && fin_temp_unit != 'K') // only run loop when input is neither C,F,K
    {
        printf("Enter temperature unit to convert to(C,F,K): ");
        scanf("%c",&fin_temp_unit);
    }

    // processing

    // - C to F
    if (init_temp_unit == 'C' && fin_temp_unit == 'F'){
        fin_temp_val = (1.8*init_temp_val)+32;
    } 
    // - F to C
    else if (init_temp_unit == 'F' && fin_temp_unit == 'C'){
        fin_temp_val = (init_temp_val-32)/1.8;
    } 
    // - C to K
    else if (init_temp_unit == 'C' && fin_temp_unit == 'K'){
        fin_temp_val = init_temp_val+273;
    }
    // - K to C
    else if (init_temp_unit == 'K' && fin_temp_unit == 'C'){
        fin_temp_val = init_temp_val-273;
    }
    // - F to K
    else if (init_temp_unit == 'F' && fin_temp_unit == 'K'){
        fin_temp_val = ((init_temp_val-32)/1.8)+273;
    }
    // - K to F
    else if (init_temp_unit == 'K' && fin_temp_unit == 'F'){
        fin_temp_val =( (init_temp_val-273)*1.8)+32;
    }

    printf("your result: %f",fin_temp_val);

    return 0;

}