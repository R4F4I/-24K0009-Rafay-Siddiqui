/*

? |Create a structure to store details about cars in a dealership, including make, model,
? |year, price, and mileage. Write a program that allows users to add new cars, display a
? |list of available cars, and search for cars by make or model.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <string.h>

struct vehicle
{
    char make[20];
    char model[20];
    int year;
    float price;
    int mileage;
};

void add_new_car(struct vehicle car){

    
    
}

void display_car(struct vehicle car){
    
}

int main(){

    struct vehicle car[5];

    char make[20];
    char model[20];
    int year;
    float price;
    int mileage;

    // enter details
    printf("enter car details\n");
    
    for (size_t i = 0; i < 5; i++)
    {
        printf("enter make: ");
        scanf("%s", &make);
        strcpy(car[i].make,make);

        printf("enter model: ");
        scanf("%s", &model);
        strcpy(car[i].model,model);

        printf("enter year: ");
        scanf("%d", &year);
        car[i].year = year;

        printf("enter price: ");
        scanf("%f", &price);
        car[i].price = price;

        printf("enter mileage: ");
        scanf("%d", &mileage);
        car[i].mileage = mileage;
        printf("----\n");
    }


    // display cars
    for (size_t i = 0; i < 5; i++)
    {
        printf("car %d\n",i+1);
        printf("make: %s\n", car[i].make);
        printf("model: %s\n", car[i].model);
        printf("year: %d\n", car[i].year);
        printf("price: %f\n", car[i].price);
        printf("mileage: %d\n", car[i].mileage);
        printf("----\n");
    }

    // search car
    // by make
    printf("enter make to search: ");
    scanf("%s", &make);
    for (size_t i = 0; i < 5; i++)
    {
        if (strcmp(car[i].make, make) == 0) {
            printf("car found: %d\n",i+1);
        }
    }
    // by model
    printf("enter model to search: ");
    scanf("%s", &model);
    for (size_t i = 0; i < 5; i++)
    {
        if (strcmp(car[i].model, model) == 0) {
            printf("car found: %d\n",i+1);
        }
    }


 return 0;
}