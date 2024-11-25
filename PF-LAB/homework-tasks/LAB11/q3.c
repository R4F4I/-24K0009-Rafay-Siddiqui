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

#define FILE_NAME_student "student_data.txt"
#define FILE_NAME_course  "course_data.bin"
#define MAX_COURSES 4                       // per stduent
#define MAX_STUDENTS 3


struct Course
{
    char name[50];
    int  code;
    char instructor[50];
};

struct Course empty_course = {"",0,""};

struct Student
{
    char name[50];
    int roll;
    struct Course courses[MAX_COURSES]; // max number courses per student
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
        fprintf(fptr,"stud roll: %d\n",students[i].roll);
        fprintf(fptr,"Enrolled courses:\n");
        
        for ( j = 0; j < MAX_COURSES; j++){
            if (students[i].courses[j].name[0] != '\0') // check if the name filed is not empty
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

int text_file_read(char file_name[],struct Student students[], int size){
    int i,j;
    FILE *fptr;
    fptr = fopen(file_name,"r");

    if (fptr==NULL)
    {
        printf("error opening file");
        return -1; // custom err signal to prevent confusion with the value returned as salary
    }


    for(i=0;i<size;i++){
        fscanf(fptr,"stud name: %49[^\n]\n",students[i].name);
        fscanf(fptr,"stud roll: %d\n",&students[i].roll);
        fscanf(fptr,"Enrolled courses:\n");

        for (j = 0; j < MAX_COURSES; j++)
        {
            if (
                //                             V` continue reading until brakcet is caught
                fscanf(fptr, "  - Course: %49[^(] (Code: %d, Instructor: %49[^)])\n", //%49[^) continue reading until brakcet is caught
                        students[i].courses[j].name,
                        &students[i].courses[j].code,
                        students[i].courses[j].instructor) == 3)
            {
                printf("read successfully\n");
                // fscanf returns the how many values have been successfully read, in the example above 3 values have beeen sucessfully read hence 3 is returned
            }
            else
            {   
                printf("stopped reading\n");
                break;
            }
        }
        fscanf(fptr, "\n");
    }

    fclose(fptr);
    // successful read, close the file
    return 0;

}


int main(){
    int i,j;

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

    struct Student students[MAX_STUDENTS] = {
        {
            "John Doe",           // name
            24001,                // roll number
            {
                courses[0],       // courses array (up to 4 courses)
                courses[1],
                empty_course,
                empty_course,
            }
            
        },
        {
            "Jane Smith", 
            24002, 
            {
                courses[2],
                courses[6],
                empty_course,
                empty_course,
            }
        },
        {
            "Mike Johnson",
            24003,
            {
                courses[4],
                empty_course,
                empty_course,
                empty_course,
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


    // ! display courses data from binary file in the console
    printf("\n\nCOURSES INFO:\n\n\n");
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
    for (i = 0; i < MAX_STUDENTS; i++){
        strcpy(students[i].name,"");
        students[i].roll = 0;
        for (j = 0; j < MAX_COURSES; j++)
        {
            
            strcpy(students[i].courses[j].name,"");
            strcpy(students[i].courses[j].instructor,"");
            students[i].courses[j].code=0;
        }
    }


    printf("\n\nSTUDENTS INFO:\n\n\n");



    // ! READ text student FILE
    if (text_file_read(FILE_NAME_student,students,3)==-1)
    {
        return 1;
    }
    // file read in text will be displayed within the function

    

    // ! display text
    for (i = 0; i < MAX_STUDENTS; i++){
        printf("student name: %s\n",students[i].name);
        printf("student roll: %d\n",students[i].roll );
        printf("Enrolled Coursesq:\n");
        for (j = 0; j < MAX_COURSES; j++)
        {
            if (students[i].courses[j].name[0] != '\0')
            {
               printf( "  - Course: %s (Code: %d, Instructor: %s)\n", 
                        students[i].courses[j].name, 
                        students[i].courses[j].code, 
                        students[i].courses[j].instructor);

            }
        }
    }


 return 0;
}