/*

? |Employee Salary Record (Binary File):
? |* Write a program to store employee salary records (name, ID, salary) in a binary file.
? |* Implement functionality to read the records from the file and calculate the total salary expense
? |  of the company.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

/*
         write    / of   /this  / in
         this    /this  /many  / this
         data   /size  /times / file
          V       V       V   V          
 fwrite(data,sizeof(data),1,file); 
 
                OR

fwrite(
    data,         //  write this data  
    sizeof(data), //  of this size
    1,            //  this many times
    file          //  in this file
);
*/

/* instead of writing continuously, write it in an array buffer and write that buffer once  */

#include <stdio.h>
#include <string.h>

#define FILE_NAME ".emp_rec.bin"
#define MAX_RECORDS 100

struct employee_record
{
    char name[50];
    int id;
    float salary;
};

int file_write(struct employee_record employee_records[], int size){
    FILE *fptr;
    fptr = fopen(FILE_NAME,"wb");

    if (fptr==NULL)
    {
        printf("error opening file");
        return -1;
    }

    fwrite(employee_records,sizeof(struct employee_record)*size,1,fptr);

    fclose(fptr);

    return 0;
    

}

int file_read(struct employee_record employee_records[],int size){
    FILE *fptr;
    fptr = fopen(FILE_NAME,"rb");


    if (fptr==NULL)
    {
        printf("error opening file");
        return -1; // custom err signal to prevent confusion with the value returned as salary
    }
    fread(employee_records,sizeof(struct employee_record)*size,1,fptr);

    fclose(fptr);
    // successful read, close the file
    return 0;

}


int main(){

    float total=0;
    int num_of_records;
    int i;
    struct employee_record emp;
    struct employee_record employee_records[MAX_RECORDS];

    printf("Enter the number of records you want to enter:");
    scanf("%d",&num_of_records);

    //! WRITE FILE
    // write records, by first appending them in a buffer array and then writing the buffer to the file once
    for (i = 0; i < num_of_records; i++)
    {   
        printf("Enter name: ");
        scanf("%s",emp.name);
        printf("Enter id: ");
        scanf("%d",&emp.id);
        printf("Enter salary: ");
        scanf("%f",&emp.salary);
        employee_records[i] = emp;
        printf("----\n");
    }

    if (file_write(employee_records,num_of_records)==-1){
        // main will return 1
        return 1;
    }
    
    // reset the buffer array, to validate correct file transfer
    for (i = 0; i < num_of_records; i++){
        strcpy(employee_records[i].name,"");
        employee_records[i].id = 0;
        employee_records[i].salary = 0;
    }

    //! READ FILE
    // read file once and add it to a buffer array and extract from the buffer array
    if (file_read(employee_records,num_of_records)==-1){
        // main will return 1
        return 1;
    }
    for (i = 0; i <num_of_records; i++){
        total += employee_records[i].salary;
    }

    printf("total salary: %.2f\n",total);



    return 0;
}