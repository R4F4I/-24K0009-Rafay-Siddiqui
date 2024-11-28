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
    int dateOfJoining;
};



void assign_values(int code, char name[50],int date, struct Employee emp){

    strcpy(emp.employeeName,name);
    emp.employeeCode = code;
    emp.dateOfJoining = date;

}

void get_values(int code, char name[50],int date){

    printf("get code:");
    scanf("%d",code);
    printf("get name[50]:");
    scanf("%d",name[50]);
    printf("get date:");
    scanf("%d",date);

}


int main(){

    int code;
    char name[50];
    int date;

    struct Employee employees[4];

    get_values(code,name,date);


 return 0;
}