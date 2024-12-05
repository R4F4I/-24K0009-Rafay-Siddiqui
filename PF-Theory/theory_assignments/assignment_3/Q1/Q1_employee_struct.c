/*

? | Write a program that contains a structure named Employee which contains the following
? | data members:
? |     + employeeCode
? |     + employeeName
? |     + dateOfJoining
? | Perform the following operations:
? |     1. Define a function that assigns user-defined values to these variables.
? |     2. Create an array of 4 Employee structs and initialize them with user-defined values.
? |     3. Define a function that asks the user to enter the current date, calculates the tenure of each
? |        employee, and checks if the tenure is more than three years. Display the details of
? |        employees with tenure of more than three years and the count of such employees.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    int employeeCode;
    char employeeName[50];
    int dateOfJoining;      // year of joining
};




void getValues(struct Employee emp){

    printf("get code:");
    scanf("%d",emp.employeeCode);
    printf("get name:");
    scanf("%s",emp.employeeName);
    printf("get date:");
    scanf("%d",emp.dateOfJoining);

}

int tenure_check(struct Employee emp){
    int current_year = 2024;
    printf("Enter current year:");
    scanf("%d",&current_year);
    int tenure = current_year - emp.dateOfJoining;
    return tenure;
}

void print_details(struct Employee emp){
    printf("name: %s\n",emp.employeeName);
    printf("code: %d\n",emp.employeeCode);
    printf("date joined: %d\n",emp.dateOfJoining);
}

int main(){

    int count = 0;
    struct Employee employees[4];

    for (size_t i = 0; i < 4; i++)
    {
        getValues(employees[i]);
    }
    
    for (size_t i = 0; i < 4; i++)
    {
        if (tenure_check(employees[i])>3){
            print_details(employees[i]);
            count++;
        }
    }
    printf("a total of %d employees have tenure greater than 3 years\n",count);

 return 0;
}