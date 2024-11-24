/*

? |Design a Student Course Enrollment System where:
? |     * A Course structure contains the course name, code, and instructor.
? |     * A Student structure contains name, roll number, and an array of courses enrolled in.
? |     * The system should:
? |         o Store student and course enrollment data in a file (binary or text).
? |         o Display the courses enrolled by a student.
? |         o Save a student's enrollment data and generate a report on the total number of students
? |           enrolled in each course.
? |         o Allow for modification of course enrollment and update the file accordingly.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/
#include <stdio.h>
#include <string.h>

#define FILE_NAME_student "student_data.text"
#define FILE_NAME_course  "course_data.bin"


struct Course
{
    char name[50];
    int  code;
    char instructor[50];
};

struct Student
{
    char name[50];
    int roll;
    struct Course courses[4]; // max number courses per student
};


int bin_file_write(char file_name[],struct Course courses[], int size){
    FILE *fptr;
    fptr = fopen(file_name,"wb");

    if (fptr==NULL)
    {
        printf("error opening file");
        return -1;
    }

    fwrite(courses,sizeof(struct Course)*size,1,fptr);

    fclose(fptr);

    return 0;
    

}

int bin_file_read(char file_name[],struct Course courses[], int size){
    FILE *fptr;
    fptr = fopen(file_name,"rb");


    if (fptr==NULL)
    {
        printf("error opening file");
        return -1; // custom err signal to prevent confusion with the value returned as salary
    }
    fread(courses,sizeof(struct Course)*size,1,fptr);

    fclose(fptr);
    // successful read, close the file
    return 0;

}


int text_file_write(char file_name[],struct Student students[], int size){
    int i,j;
    FILE *fptr;
    fptr = fopen(file_name,"w");

    if (fptr==NULL)
    {
        printf("error opening file");
        return -1;
    }
    // no need to create a buffer
    for(i=0;i<size;i++){
        fprintf(fptr,"stud name: %s\n",students[i].name);
        fprintf(fptr,"stud roll: %s\n",students[i].roll);
        fprintf(fptr,"Enrolled courses:\n",);
        for ( j = 0; j < 4; j++)
        {
            if (students[i].courses[j].name>0)
            {
               fprintf(fptr, "  - Course: %s (Code: %d, Instructor: %s)\n", 
                        students[i].courses[j].name, 
                        students[i].courses[j].code, 
                        students[i].courses[j].instructor);

            }
        }
        fprintf(fptr, "\n");  
    }


    fclose(fptr);

    return 0;
    

}

int text_file_read(char file_name[],struct employee_record employee_records[],int size){
    int i,j;
    FILE *fptr;
    fptr = fopen(file_name,"r");

    if (fptr==NULL)
    {
        printf("error opening file");
        return -1; // custom err signal to prevent confusion with the value returned as salary
    }

    for ( i = 0; i < size; i++)
    {
        fscanf(fptr,"studen")
    }
    


    fclose(fptr);
    // successful read, close the file
    return 0;

}


int main(){
    int i;

    // input all courses available
    struct Course courses[10] = {
        {"Introduction to Programming", 101 , "Dr. Smith"},
        {"Data Structures"            , 202 , "Prof. Johnson"},
        {"Algorithms"                 , 303 , "Dr. Williams"},
        {"Computer Networks"          , 404 , "Prof. Brown"},
        {"Database Systems"           , 505 , "Dr. Davis"},
        {"Operating Systems"          , 606 , "Prof. Miller"},
        {"Software Engineering"       , 707 , "Dr. Wilson"},
        {"Computer Graphics"          , 808 , "Prof. Taylor"},
        {"Artificial Intelligence"    , 909 , "Dr. Anderson"},
        {"Machine Learning"           , 1010, "Prof. Thomas"}
    };

    struct Student students[3] = {
        {
            "John Doe",           // name
            24001,                // roll number
            courses[0]            // courses array (up to 4 courses)
            
        },
        {
            "Jane Smith", 
            24002, 
            {
                courses[2],
                courses[3]
            }
        },
        {
            "Mike Johnson",
            24003,
            {
                courses[4]
            }
        }
    };


    // ! WRITE binary Courses FILE
    // write all the courses to a file
    if (bin_file_write(FILE_NAME_course,courses,10) == -1)
    {
        return 1;
    }
    
    // reset the buffer array, to validate correct file transfer
    for (i = 0; i < 10; i++){
        strcpy(courses[i].name,"");
        courses[i].code = 0;
        strcpy(courses[i].instructor,"");
    }

    // ! READ binary Courses FILE
    if (bin_file_read(FILE_NAME_course,courses,10)==-1)
    {
        return 1;
    }
    
    // ! present courses data from binary file in the console
    for (i = 0; i <9; i++){
        printf("name: %s \ncode: %d \ninstructor: %s\n",courses[i].name,courses[i].code,courses[i].instructor);
        printf("---\n");
    }
    printf("name: %s \ncode: %d \ninstructor: %s\n",courses[i].name,courses[i].code,courses[i].instructor);
    
    // *--------------------------------------  text students  --------------------------------------* //
    
    // ! WRITE text student FILE
    // write all the courses to a file
    if (text_file_write(FILE_NAME_student,students,3) == -1)
    {
        return 1;
    }
    
    // reset the buffer array, to validate correct file transfer
    for (i = 0; i < 10; i++){
        strcpy(students[i].name,"");
        students[i].roll = 0;
            strcpy(students[i].courses->name,"");
            strcpy(students[i].courses->instructor,"");
            students[i].courses->code=0;
    }

    // ! READ text student FILE
    if (text_file_read(FILE_NAME_student,students,3)==-1)
    {
        return 1;
    }
    // file read in text will be displayed within the function

 return 0;
}