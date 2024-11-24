/*

? |Employee Salary Record (Binary File):
? |* Write a program to store employee salary records (name, ID, salary) in a binary file.
? |* Implement functionality to read the records from the file and calculate the total salary expense
? |of the company.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

#define FILE_NAME "hello.bin"
#define MAX_RECORDS 100

struct employee_record
{
    char name[50];
    int id;
    float salary;
};


int main(){

    FILE *file;
    file = fopen(FILE_NAME, "wb");
    if (file == NULL) {
        printf("Could not open file %s\n", FILE_NAME);
        return 1;
        }
    struct employee_record records[MAX_RECORDS];
    int num_records = 0;
    int i;
    for (i = 0; i < MAX_RECORDS; i++)
    {
        printf("Enter name, ID, and salary for employee %d:\n", i +1);
        scanf("%s %d %f", records[i].name, &records[i].id,&records[i].salary);
        
        if (records[i].salary <= 0)
        {
            break;
        }
        num_records++;
    }
    if (num_records > 0)
    {
        fwrite(records, sizeof(struct employee_record), num_records, file);
        printf("Records written to file %s\n", FILE_NAME);
    }
    fclose(file);

    return 0;
}