/*

? |Allocate memory dynamically for an array of structures.
? | * Use the array to store employee details (ID, name, salary).
? | * Sort employees by salary using pointer-based comparison.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int ID;
    char name[50];
    float salary;
};


int main(){
    int n;
    scanf("%d",&n);
    struct employee *employees = malloc(n*sizeof(struct employee));

    for (size_t i = 0; i < n; i++)
    {
        printf("enter ID: ");
        scanf("%d",&employees[i].ID);
        printf("enter name: ");
        scanf("%s",employees[i].name);
        printf("enter salary: ");
        scanf("%f",&employees[i].salary);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("--------\n");
        printf("ID: %d\n",employees[i].ID);
        printf("name: %s\n",employees[i].name);
        printf("salary: %f\n",employees[i].salary);
    }
    
    free(employees);

    return 0;
}