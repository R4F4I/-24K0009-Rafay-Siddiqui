/*

? |Design a structure to store information about travel packages, including package name,
? |destination, duration, cost, and number of seats available. Write a program that allows
? |users to book a travel package and display available packages.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

struct package
{
    char name[50];
    char destination[50];
    int duration;
    int cost;
    int seats_available;

};


int main(){

    int i,choice;
    struct package packages[7] = {
        {"Paris"  ,   "France",   5,  5000,   10},
        {"Rome"   ,    "Italy",   4,  4500,   15},
        {"Tokyo"  ,    "Japan",   7,  6000,   15},
        {"Chicago",      "USA",   5,  5500,   9},
        {"London" ,       "UK",   4,  4800,   12},
        {"Dubai"  ,      "UAE",   5,  4500,   9},
        {"Sydney" ,"Australia",   7,  6500,   7}
    };

    // book a travel package
    for (i = 0; i < 7; i++)
    {
        printf("Package no: %d\n", i);
        printf("Name: %s\n", packages[i].name);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: $%d\n", packages[i].cost);
        printf("Seats Available: %d\n", packages[i].seats_available);
        printf("------\n");
    }
    
    printf("choose your package:");
    scanf("%d",&choice);

    printf("You chose:\n");

    printf("Package no: %zu\n", choice);
    printf("Name: %s\n", packages[choice].name);
    printf("Destination: %s\n", packages[choice].destination);
    printf("Duration: %d days\n", packages[choice].duration);
    printf("Cost: $%d\n", packages[choice].cost);
    printf("Seats Available: %d\n", packages[choice].seats_available);
    

 return 0;
}