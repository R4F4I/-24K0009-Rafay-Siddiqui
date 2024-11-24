/*

? | Define a structure for an employee with fields such as name, employee ID, and salary.
? | Create a nested structure for a department that contains multiple employees.
? | Write a program that calculates the total salary of all employees in a specific department.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

struct employee
{
    char name[50];
    int id;
    int salary;

};

// order is important in nested structs

struct department
{
    struct employee emp1;
    struct employee emp2;
    struct employee emp3;
    struct employee emp4;
    struct employee emp5;
    struct employee emp6;
    struct employee emp7;
};




int main(){

    int total;

    struct department dep1 = {
        {"name 1",24, 50000},
        {"name 2",25, 60000},
        {"name 3",26, 70000},
        {"name 4",27, 80000},
        {"name 5",28, 90000},
        {"name 6",29, 100000},
        {"name 7",30, 110000}
    };

    
    total = dep1.emp1.salary + 
            dep1.emp2.salary + 
            dep1.emp3.salary + 
            dep1.emp4.salary + 
            dep1.emp5.salary + 
            dep1.emp6.salary + 
            dep1.emp7.salary; 
    
    printf("total salary: %d\n", total);


 return 0;
}